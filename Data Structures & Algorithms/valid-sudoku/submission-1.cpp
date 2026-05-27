class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char>rows[9];
        set<char>cols[9];
        set<char>boxes[9];

        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){

        if(board[r][c]== '.'){
        continue;}
        char val=board[r][c];
        int box = (r/3) * 3 + (c/3);

        if(rows[r].count(val)){ return false;}
        if(cols[c].count(val)){ return false;}
        if(boxes[box].count(val)){ return false;}

        rows[r].insert(val);
        cols[c].insert(val);
        boxes[box].insert(val);

        
            }
    }
    
    return true; }
};