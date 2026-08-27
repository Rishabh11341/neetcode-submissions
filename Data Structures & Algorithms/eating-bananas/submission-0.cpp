class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());

        while(left<right){
            int middle=left+(right-left)/2;
            int hour_spent=0;

            for(int i=0;i<piles.size();i++){
                hour_spent+=(piles[i]+middle-1)/middle;
            }
            if(hour_spent<=h){
                    right=middle;
                }
                else{
                    left=middle+1;
                }
        }
        return right;
    }
};
