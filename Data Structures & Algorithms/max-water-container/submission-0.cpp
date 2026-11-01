class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0;
        int right  = heights.size()-1;
        int biggest_area = 0;
        while(left<right){

            int area =  right - left;
            if (heights[left] > heights[right]){
                area  = heights[right] * area;
                right--;
            }else{
                 area  = heights[left] * area;
                 left++;
            }
            
            if (biggest_area < area)biggest_area=area;


        }

        return biggest_area;
    }
};
