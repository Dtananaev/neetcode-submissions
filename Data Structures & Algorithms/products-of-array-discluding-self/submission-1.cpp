class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);

        for (int idx_prefix = 0; idx_prefix< nums.size(); ++idx_prefix){
            int idx_suffix = nums.size() - 1 - idx_prefix;

            if(idx_prefix>=1){ 
                prefix[idx_prefix] = prefix[idx_prefix-1] * nums[idx_prefix-1];
            }

            if(idx_suffix < nums.size() - 1 ){
                suffix[idx_suffix] = suffix[idx_suffix+1] * nums[idx_suffix+1];
            }

        }
        vector<int> result;
        result.reserve(nums.size());
        for(int i =0; i< nums.size(); ++i){
            result.emplace_back(prefix[i]* suffix[i]);            
        }


        return result;

    }
};
