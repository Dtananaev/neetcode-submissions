class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If the middle element is greater than the rightmost element,
            // the smallest value must be to the right of mid.
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } 
            // Otherwise, the right half is sorted normally, so the 
            // smallest value is mid itself or to the left of mid.
            else {
                right = mid;
            }
        }

        // When left == right, we have found the minimum element
        return nums[left];
    }
};