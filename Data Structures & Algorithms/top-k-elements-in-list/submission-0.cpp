class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> ans;
        priority_queue<pair<int, int>>pq;
        vector<int> result;
        
        for(int i=0;i<nums.size();i++){
          ans[nums[i]]++;

        }

        for(const auto& val:ans){
            pq.push({val.second,val.first});
        }
        
        for(int i=0;i<k;i++){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
