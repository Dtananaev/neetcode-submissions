class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        std::unordered_map<char, int> s1_map;
        // Fill the map
        for(int i = 0; i < s1.size(); ++i) s1_map[s1[i]]++;

        // Iterate over string
        for(int i=0; i < s2.size(); ++i){

            // If we match a letter with s2
            if (s1_map.count(s2[i])!=0){
                std::unordered_map<char, int> temp;
                temp[s2[i]]++;
                if (temp == s1_map) { return true; }
                // go over substring 
                for (int r=i+1; r < s2.size(); ++r){
                    temp[s2[r]]++;
                    if (temp == s1_map){return true;}

                    const auto it_s1 = s1_map.find(s2[r]);
                    const auto it_s2 = temp.find(s2[r]);

                    if (it_s1 != s1_map.end()){
                        int diff  = it_s1-> second - it_s2->second;

                        if (diff<0){
                            break;
                        }
                    }else{
                        break;
                    }

                }



            }

        }

        return false;

    }
};
