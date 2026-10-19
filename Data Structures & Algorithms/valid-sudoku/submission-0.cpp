class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        std::unordered_map<int, set<char>> row;
        std::unordered_map<int, set<char>> col;
        std::unordered_map<int, set<char>> sq;



        for (int i = 0; i < board.size(); ++i){ // go over rows
            for(int j = 0; j < board[0].size(); ++j){ // go over columns
            
            if (board[i][j]!= '.'){
                const auto& it_row = row[i].find(board[i][j]);
                // check rows
                if (it_row!= row[i].end()){
                    return false;
                }else{
                    row[i].emplace(board[i][j]);
                }
                // Check cols
                const auto& it_col = col[j].find(board[i][j]);
                if (it_col != col[j].end()){
                    return false;
                }else{
                     col[j].emplace(board[i][j]);
                }

                int idx_sq = (i/3)*3 + j/3;
                const auto& it_sq = sq[idx_sq].find(board[i][j]);
                if (it_sq != sq[idx_sq].end()){
                    return false;
                }else{
                     sq[idx_sq].emplace(board[i][j]);
                }
            }
            }
        }
        return true;
    }
};
