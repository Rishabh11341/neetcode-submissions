class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> fleets;
        vector<pair<int  ,double>> cars;

        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.rbegin(),cars.rend());

        for(auto car:cars){
            double time=car.second;
            if(fleets.empty() || time>fleets.top()){
                fleets.push(time);
            }
        }
        return fleets.size();
    }
};
