class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        std::unordered_map<char, int> table1, table2;
        for(int i =0; i < s.size(); ++i){
            table1[s[i]]++;
            table2[t[i]]++;
           
        }
        
        return table1==table2;
    }

};
