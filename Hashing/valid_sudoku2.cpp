class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> set;
        // traversal in col
        int col = 0;
        while(col<9){
            for(int i=0; i<9; i++){
                char temp = board[i][col];
                if(temp == '.')
                    continue;
                else{
                    if(set.count(temp))
                        return false;
                    set.insert(temp);
                }
            }
            col++;
            set.clear();
        }
        // traversal in row
        int row = 0;
        while(row<9){
            for(int i=0; i<9; i++){
                char temp = board[row][i];
                if(temp == '.')
                    continue;
                else{
                    if(set.count(temp))
                        return false;
                    set.insert(temp);
                }
            }
            row++;
            set.clear();
        }
        // box traversal
        pair<int,int> block = {0,0};
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                block = {i,j};
                for(int x = block.first*3; x<block.first*3 + 3; x++)
                    for(int y = block.second*3; y<block.second*3 + 3; y++){
                        char temp = board[x][y];
                        if(temp == '.')
                            continue;
                        else{
                            if(set.count(temp))
                                return false;
                            set.insert(temp);
                        }
                    }
                set.clear();
            }
        }
        return true;
    }
};