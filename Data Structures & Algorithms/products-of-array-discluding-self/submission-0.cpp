class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int total_product = 1;
        int count_zero = 0;
        for (const auto val : nums){
            if (val != 0){total_product *= val;}
            else{count_zero++;}
        }
        if (count_zero>1){return result;
        
        }
        for(int i = 0; i < nums.size();++i){
            
            if (count_zero == 0){
            result[i] = total_product  / nums[i];
            } else {
                if (nums[i] == 0){result[i]= total_product;}
            }
        }
        return result;

    }
};
