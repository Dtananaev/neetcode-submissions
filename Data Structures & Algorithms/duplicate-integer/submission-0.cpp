class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s;
        for(const auto & val : nums){
            std::set<int>::iterator it = s.find(val);
            if (it != s.end()){
                return true;
            }else{
                s.insert(val);
                
            }

        }
    return false;

    }
};