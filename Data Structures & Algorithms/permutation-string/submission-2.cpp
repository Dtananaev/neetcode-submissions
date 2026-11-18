class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        // Check the size of the strings
        if(s1.size() > s2.size()) return false;

        std::vector<int> s1_count(26, 0);
        std::vector<int> window(26, 0);

        int window_size = s1.size();

        // Count characters in window and in s1
        for(int i =0; i < s1.size(); ++i){
            s1_count[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }

        for (int i=window_size; i < s2.size(); ++i){
            if (s1_count == window) return true;
            // Add new value
            window[s2[i]-'a']++;
            // Remove the left value
            window[s2[i-window_size]-'a']--;

        }


    return window==s1_count;
    }
};
