class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> unique;
        int left=0;
        int result=0;

        for(int right=0;right<s.size();right++){
            while(unique.find(s[right])!=unique.end()){
                unique.erase(s[left]);
                left++;
            }
            unique.insert(s[right]);
            result=max(result,right-left+1);
        }
        return result;
    }
};
