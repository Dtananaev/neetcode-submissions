class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if (strs.size()==1){return {{strs[0]}};}        
        if (strs.size()==0){return {{}};}       

        // Iterate over all strings
        vector<vector<string>> result;
        std::unordered_map<string, std::vector<int>> m;
        for(int i =0; i< strs.size();++i){
            string s = strs[i];
            sort(s.begin(), s.end());
            auto it = m.find(s);
            if (it != m.end()){
                it->second.emplace_back(i);
            }else{
                m[s]={i};
            }
        }
        for (const auto& val: m ){
            std::vector<string> temp;
            for (const auto& idx : val.second){
                temp.emplace_back(strs[idx]);
            }
            result.emplace_back(temp);


        }
        return result;
    }
};
