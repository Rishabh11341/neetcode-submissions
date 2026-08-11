class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int > stg1;
        unordered_map<char, int > stg2;
        int left=0;

        for(int i=0;i<s1.size();i++){
           stg1[s1[i]]++;
        }

        for(int right=0;right<s2.size();right++){
                stg2[s2[right]]++;

                if(right-left+1>s1.size()){
                    stg2[s2[left]]--;
                    if(stg2[s2[left]]==0){
                        stg2.erase(s2[left]);
                    }
                    left++;
                }
            if(stg2==stg1){
            return true;
        }
            
        }
        
        return false;
    }
};
