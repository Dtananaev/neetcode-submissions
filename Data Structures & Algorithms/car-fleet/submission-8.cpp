class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<std::pair<int, int>> v(position.size());
        for(int i = 0; i < position.size(); ++i){
           v[i] = {position[i], speed[i]};
        }

        std::sort(v.begin(), v.end(), [] (const auto& a, const auto& b){return a.first > b.first;});

        std::stack<float> s;


        for (int i =0; i < v.size(); ++i){

            float steps = static_cast<float>((target - v[i].first)) / v[i].second;
            if (s.empty() || s.top() < steps) s.push(steps);

        }

        return s.size();
    }
};
