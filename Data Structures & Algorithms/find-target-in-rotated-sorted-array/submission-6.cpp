class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Target found
            if (nums[mid] == target) {
                return mid;
            }

            // Left half is perfectly sorted
            if (nums[left] <= nums[mid]) {
                // Check if the target is within this sorted left half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // Narrow search to left half
                } else {
                    left = mid + 1;  // Narrow search to right half
                }
            } 
            // Right half is perfectly sorted
            else {
                // Check if the target is within this sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // Narrow search to right half
                } else {
                    right = mid - 1; // Narrow search to left half
                }
            }
        }

        return -1; // Target not found
    }
};