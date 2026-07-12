class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> first_string;
        unordered_map<char, int> second_string;

        if(s.size()==t.size()){
            for(int i=0;i<s.size();i++){
                first_string[s[i]]++;
                second_string[t[i]]++;
             
            }
            if(first_string==second_string){
                return true;
            }
        }

        return false;

    }      
};
