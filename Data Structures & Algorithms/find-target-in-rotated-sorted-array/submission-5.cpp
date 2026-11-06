class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() -1;

        while(left < right){
           int center = left + (right-left)/ 2;
           if(nums[center]>nums[left]) left = center;
           else right  = center;
        }
        cout<<" left "<<left<<" right "<<right<<endl;
        // Check whether left and right at the end of the array
        if (right == nums.size()-1 || (target >= nums[0] && target <= nums[right])){
            left = 0;
        }else{
            left+=1;
            right = nums.size() -1;
        }

        cout<<"after left "<<left<<" right "<<right<<endl;

        while(left <= right){
            int center = left + (right-left)/ 2;

            if (nums[center]>target){
                right = center -1;
            }else if (nums[center]<target){
                left  =center+1;
            }else{
                return center;
            }
        }


    return -1;
    }
};
