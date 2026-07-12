class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans_str1;
        vector<vector<string>> result;

        for(int i=0;i<strs.size();i++){
            string strcp=strs[i];
            sort(strcp.begin(),strcp.end());
            ans_str1[strcp].push_back(strs[i]);
        }
        for(auto val:ans_str1){
            result.push_back(val.second);
        }
        return result;
    }
};
