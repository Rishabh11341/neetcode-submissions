class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int > ans;

        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if((ans.find(need))!=ans.end()){
                return {ans[need],i};
            }
            ans[nums[i]]=i;
        } 
        return {};   
    }
};
