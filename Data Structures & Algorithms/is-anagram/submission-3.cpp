class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ans;

        if(s.size()!=t.size()){
            return false;
        }

        for(char c:s){
            ans[c]++;
        }

        for(char c:t){
            if(ans.find(c)==ans.end()){
                return false;
            }
            ans[c]--;

        if(ans[c]<0){
            return false;
        }
        }
        

        return true;
        }
        
    };
