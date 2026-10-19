class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Stack allocation
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sq[9][9] = {false};
        for (int i = 0; i < board.size(); ++i){ // go over rows
            for(int j = 0; j < board[0].size(); ++j){ // go over columns

            if (board[i][j] == '.') continue;

            int num = board[i][j] - '1'; // map to 0-8 range
            int idx_sq = (i/3)*3 + j/3;
            if  (row[i][num] || col[j][num] || sq[idx_sq][num]) return false;
            row[i][num] = true;
            col[j][num] = true;
            sq[idx_sq][num] = true;
            }
        }
        return true;
    }
};
