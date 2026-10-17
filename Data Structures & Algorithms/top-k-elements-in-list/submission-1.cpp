class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. count the numbers
        std::unordered_map<int, int> m;
        for (const auto & val : nums){
            m[val]++;
        }
        std::vector<std::vector<int>> freq(nums.size()+1);
        // 2. bucket sorting
        for (const auto & [key, val] : m){freq[val].emplace_back(key);}
        
        // 3. return top k
        std::vector<int> result;
        result.reserve(k);

        for(int j = freq.size()-1; j>=1; --j){

            if (freq[j].size()>0){
                for(const auto & val : freq[j]){
                    
                    result.emplace_back(val);
                    if(result.size()==k){
                        return result;
                    }



                }

            }

        }



    return result;
    }
};
