class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        for (auto num : nums){m[num]++;}


        std::vector<std::pair<int, int>> vec(m.begin(), m.end());

        sort(vec.begin(), vec.end(), [](const auto a, const auto b){
            return a.second> b.second;
        });


        std::vector<int> result;
        result.reserve(k);
        for (int i=0; i<k; ++i){
            result.emplace_back(vec[i].first);
        }
    return result;
    }
};
