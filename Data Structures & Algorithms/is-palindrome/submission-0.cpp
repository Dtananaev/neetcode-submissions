class Solution {
public:
    bool isPalindrome(string s) {
        
        string clean_s;
        for(int i = 0; i < s.size(); ++i){
            if (std::isalnum(s[i])) { // check that i is alphanumercal
                clean_s.push_back(std::tolower(s[i]));
            }
        }
        // if (clean_s.size() % 2  != 0){
        //     return false;
        // }

        for(int i = 0; i < clean_s.size() / 2; ++i){
            if (clean_s[i] != clean_s[clean_s.size() - i - 1]) return false;
        }
        return true;
    }
};
