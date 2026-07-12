class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> seen;

        for(int i=0;i<nums.size();i++){
           // int previous=nums[i];
            
            if(seen.find(nums[i])!=seen.end()){
                return true;
            }
            else{
                seen.emplace(nums[i]);
            }

            
        }
        return false;
    }
};