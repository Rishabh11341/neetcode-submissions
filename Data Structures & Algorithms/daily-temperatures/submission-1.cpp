class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> temps;
        vector<int> result(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++){

            while(!temps.empty() && temperatures[temps.top()]<temperatures[i]){
                result[temps.top()]=i-temps.top();
                temps.pop();
            }
            temps.push(i);
        }
        return result;
    }
};
