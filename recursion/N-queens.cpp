class Solution {
public:
    // using this function to put the queen is safe and the appending that combination into ds.
    // putting queens in columnwise fashion , and checking safe rows for each column
    void solve(int n,int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow,  vector<int> &lowerD, vector<int> &upperD)
    {
        //base case when col has reached to n
        if ( col ==n )
        {
            //put combination from ds to ans
            ans.push_back(board);
            return; 
        }

        //recursion if not reached end 
        for (int row=0; row<n; row++)
        {
            //checking the left row, and upper lower diagonals i.e hash tables are marked . if marked then the queen is already in that row, diagnol. so cant put this queen there. else we can 
            if (leftRow[row]==0 && upperD[(n-1)-(col-row)]==0 && lowerD[row+col]==0)
            {
                board[row][col]='Q'; //can keep the q on board
                //now update the hash tables
                leftRow[row]=1;
                upperD[(n-1)-(col-row)]=1;
                lowerD[row+col]=1;
                //call the recursion for next col
                solve(n,col+1,board,ans,leftRow,lowerD,upperD);

                // while returning undo the changes
                board[row][col]='.';
                leftRow[row]=0;
                upperD[(n-1)-(col-row)]=0;
                lowerD[row+col]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<string> board(n);
        string s(n,'.');// initialising board with ....
        for ( int i =0; i<n; i++) 
           board[i]=s;

        vector<vector<string>> ans;
        vector<int> leftRow(n,0), upperD(2*n-1,0), lowerD(2*n-1,0);
        solve(n,0,board,ans,leftRow,lowerD, upperD);
        return ans;

    }
};