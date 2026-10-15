class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        std::unordered_map<char, int> table1, table2;
        for(int i =0; i < s.size(); ++i){
            std::unordered_map<char, int>::iterator it1 = table1.find(s[i]);

            if(it1 != table1.end()){
                it1->second++;
            }else{
                table1.insert(std::make_pair(s[i], 1));
            }

            std::unordered_map<char, int>::iterator it2 = table2.find(t[i]);
            if(it2 != table2.end()){
                it2->second++;
            }else{
                table2.insert(std::make_pair(t[i], 1));
            }

        }
        for(const auto& it1 : table1){

            const auto it2 = table2.find(it1.first);
            if (it2 == table2.end()){return false;}
            if (it2->second != it1.second){return false;}


        }
        return true;
    }

};
