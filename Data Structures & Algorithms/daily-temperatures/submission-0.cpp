class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        std::stack<int> indices;
        std::vector<int> results(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); ++i ){

            int curr_t = temperatures[i];
            if (!indices.empty()){
                int prev_t = temperatures[indices.top()];
                // fill the result
                while(!indices.empty() & (prev_t < curr_t)){
                    results[indices.top()] = i - indices.top();
                    indices.pop();
                    if (!indices.empty()) prev_t = temperatures[indices.top()];
                }
            }
            // push current index
            indices.push(i);

            }
    return results;    
    }
};
