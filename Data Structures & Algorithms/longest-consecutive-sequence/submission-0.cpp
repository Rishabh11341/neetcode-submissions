class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> out_array;
        int result=0;

        for(int num:nums){
            out_array.insert(num);
        }
        
        for(int num:nums){
            if(out_array.find(num-1)==out_array.end()){
                int current=num;
                int length=1;

                while(out_array.find(current+1)!=out_array.end()){
                current++;
                length++;
            }
            result=max(result,length);
            }

            
            
        }
        return result;
    }
};
