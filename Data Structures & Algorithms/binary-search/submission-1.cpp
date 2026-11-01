class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int start = 0;
        int end = static_cast<int>(nums.size()) - 1;

        while (start <= end) {
            int center = start + (end - start) / 2;

            if (nums[center] == target) {
                return center;
            } else if (nums[center] > target) {
                end = center - 1;
            } else {
                start = center + 1;
            }
        }

        return -1;
    }
};