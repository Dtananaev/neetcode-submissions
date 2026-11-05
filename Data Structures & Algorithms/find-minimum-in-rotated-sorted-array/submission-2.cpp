class Solution {
public:
    int findMin(vector<int> &nums) {

        int left = 0;
        int right = nums.size()-1;

        while(left < right && right-left!=1){
            
            int center = left + (right - left) / 2;

            if(nums[center] > nums[left] & nums[center] > nums[right]) left = center;
            else if(nums[center] < nums[left] & nums[center] < nums[right]) right = center;     else break;
            

        }

        int min_val = nums[right] > nums[left] ? nums[left] : nums[right]; 
        return min_val;
    }
};
