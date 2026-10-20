class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // First get unique numbers O(N) time and space
        std::set<int> u_nums(nums.begin(), nums.end());

        int longest_sequence = 0;
        for(int num : u_nums){



            if(!u_nums.count( num -1)){ // Get starting sequence
                int current_sequence = 1;
                int current_number = num;
                while(u_nums.count(current_number+1)){
                    current_sequence++;
                    current_number++;
                }
            longest_sequence = std::max(longest_sequence, current_sequence);
            }


        }
        return longest_sequence;
    }


};
