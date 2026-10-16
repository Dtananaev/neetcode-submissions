class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> m;
    m.reserve(nums.size());
     for (int i=0; i < nums.size(); ++i){
        if (auto it = m.find(nums[i]); it!=m.end()){return {it->second, i};}
        m.emplace(target-nums[i], i);


    }
        return {};
    }
};
