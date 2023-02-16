class Solution {
public:
   bool can_fill(char c, int row, int col, vector<vector<char>> &board)
   {
       for(int i=0 ; i<9; i++)
       {
           if(board[row][i]==c)
             return false;
           if(board[i][col]==c)
             return false;
           if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
             return false;
       }
       return true;
   }

public:
    bool solve(vector<vector<char>> &board) 
    {
        //recursive call
        for (int row=0; row<board.size(); row++)
        {
            for (int col=0; col<board.size(); col++)
            {
            //check for empty cell
              if(board[row][col]=='.')
              {
                for ( char c='1'; c<='9';c++)
                {
                  if(can_fill(c,row,col,board)==true)
                  {
                    board[row][col]=c;

                    if(solve(board)==true)
                      return true;
                    else
                      board[row][col]='.';
                  }
                }
                return false;
              }
              
            }

        }
        return true;
        
    }

public:
    void solveSudoku(vector<vector<char>>& board) {

    solve(board);

    }

};