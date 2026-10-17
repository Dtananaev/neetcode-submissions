class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if (strs.size()==1){return {{strs[0]}};}        
        if (strs.size()==0){return {};}       

        // Iterate over all strings
        // Computational complexity O(nm)
        //Memory complexity O(nm)
        std::unordered_map<string, std::vector<string>> m;
        
        
        for(const string& s : strs){
            string key(26, '\0');
            for (char c : s){key[c-'a']++;}
            m[key].emplace_back(s);
        }

        vector<vector<string>> result;
        result.reserve(m.size());
        for(const auto& pair_val : m){
            result.emplace_back(std::move(pair_val.second));
        }

      
        return result;
    }
};
