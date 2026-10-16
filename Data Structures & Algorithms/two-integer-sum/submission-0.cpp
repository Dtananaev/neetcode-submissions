class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::vector<int> result(2, 0);
    std::unordered_map<int, int> m;
     for (int i=0; i < nums.size(); ++i){
        int diff = target - nums[i];
        std::unordered_map<int, int>::iterator it = m.find(nums[i]);


        if (it != m.end()){
            result[0] = it->second;
            result[1] =  i;
            return result;
        }else{
            m[diff] = i;
        }

     }
    return result;
    }
};
