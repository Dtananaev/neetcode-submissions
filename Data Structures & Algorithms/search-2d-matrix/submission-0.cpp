class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size(); // rows 
        int n = matrix[0].size(); // cols
        int top = 0;
        int bottom = m-1;

        while (top <= bottom){

            int row_center = top + (bottom - top) / 2;

            if (matrix[row_center][0] > target){
                bottom = row_center - 1;
            }
            if(matrix[row_center][n-1] < target){
                top = row_center + 1;
            }
                    
            if (matrix[row_center][0]<=target && matrix[row_center][n-1]>=target){
                    int left = 0;
                    int right = n-1;
                    while(left<=right){
                        int col_center = left + (right - left) / 2;
                        if (matrix[row_center][col_center] > target)  right = col_center -1; 
                        else if (matrix[row_center][col_center] < target)  left = col_center + 1; 
                        else if  (matrix[row_center][col_center] == target)  return true;
                     
    
                    }
                    return false;
      
            }

        }


    return false;   
    }
};
