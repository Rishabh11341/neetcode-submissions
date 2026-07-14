class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> ans;
    vector<vector<string>> result;

    for(int i=0;i<strs.size();i++){
        string strcp=strs[i];
        sort(strcp.begin(),strcp.end());
        ans[strcp].push_back(strs[i]);
    }

    for(auto& val:ans){
        result.push_back(val.second);
    }
    return result;
    }
};
