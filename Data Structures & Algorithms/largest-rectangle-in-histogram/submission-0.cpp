class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stck;
        int max_area=0;

        for(int i=0;i<=heights.size();i++){
            int current_height;

            if(i==heights.size()){
                current_height=0;
            }
            else{
            current_height=heights[i];
            }

            while(!stck.empty() && current_height<heights[stck.top()]){
                int height=heights[stck.top()];
                stck.pop();

                int width;

                if(stck.empty()){
                    width=i;
                }
                else{
                    width=i-stck.top()-1;
                }

                max_area=max(max_area, height*width);
            }
            stck.push(i);
        }
        return max_area;
    }
};
