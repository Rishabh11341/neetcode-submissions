class Solution {
public:

    string encode(vector<string>& strs) {
        string append;
        for(int i=0;i<strs.size();i++){
        
         append+=to_string(strs[i].size())+"#"+strs[i];
        }
        
        return append;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            
            int length=stoi(s.substr(i,j-i));
            j++;

            result.push_back(s.substr(j,length));
            i=j+length;
        }
        return result;
    }
};
