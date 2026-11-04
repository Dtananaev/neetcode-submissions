class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int max_value = *std::max_element(piles.begin(), piles.end());
        // Corner case
        if(piles.size() == h) return max_value;

        // Get k value by using binary search
        int left = 1;
        int right = max_value;
        int result_k = max_value;
        while (left<=right){
            
            int k = left + (right -  left) / 2;
            long long hours = 0; 
            for (int i = 0; i < piles.size(); ++i) hours += (piles[i] + k -1) / k; 

            if (hours <= h){

                result_k = k;
                right = k - 1;
            }else{
                left = k+1;
            }                  

        }

    return result_k;

    }
};
