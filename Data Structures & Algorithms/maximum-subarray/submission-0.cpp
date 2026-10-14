class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int ans=INT_MIN;

        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            current_sum=max(current_sum,nums[i]);
            ans=max(ans,current_sum);
        }
        return ans;
    }
};
