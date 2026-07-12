class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int > answer;

        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];

            if(answer.find(need)!=answer.end()){
                return {answer[need],i};
            }
        answer[nums[i]]=i;
        }
       return {};     
    }
};
