class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        std::unordered_map<int, set<char>> row;
        std::unordered_map<int, set<char>> col;
        std::unordered_map<int, set<char>> sq;

        for (int i = 0; i < board.size(); ++i){ // go over rows
            for(int j = 0; j < board[0].size(); ++j){ // go over columns

            if (board[i][j] == '.') continue;

            if(row[i].count(board[i][j]))return false;
            row[i].insert(board[i][j]);

            if(col[j].count(board[i][j]))return false;
            col[j].insert(board[i][j]);

            int idx_sq = (i/3)*3 + j/3;
            if(sq[idx_sq].count(board[i][j])) return false;
            sq[idx_sq].insert(board[i][j]);
            
            }
        }
        return true;
    }
};
