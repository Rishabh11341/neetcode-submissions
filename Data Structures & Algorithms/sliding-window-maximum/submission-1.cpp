class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left=0;
        deque<int> dq;
        vector<int> result;



        for(int right=0;right<nums.size();right++){
            while(!dq.empty() && dq.front()<left){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[right]){
                dq.pop_back();
            }
            dq.push_back(right);

            if(right-left+1>=k){
                result.push_back(nums[dq.front()]);
                left++;
            }
        }
        return result;
    }
};
