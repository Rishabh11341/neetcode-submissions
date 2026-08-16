class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        unordered_map<char, char> find={{'(',')'}, {'[',']'},{'{','}'}};
        for(int i=0;i<s.size();i++){
            if(find.count(s[i])){
                brackets.push(s[i]);
            }
            else{
                if(brackets.empty() || find[brackets.top()]!=s[i]){
                    return false;
                }
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};
