class Solution {
    bool CheckSubBox(vector<vector<char>>&board,int i,int j,char value)
    {
       int rowStart = i - (i % 3);
      int colStart = j - (j % 3);

for(int k = 0; k < 3; ++k) {
    for(int l = 0; l < 3; ++l) {
        if(board[rowStart + k][colStart + l] == value && (rowStart + k != i || colStart + l != j)) {
            return false;
        }
    }
}

return true;

    }
    bool CheckRow(vector<vector<char>>&board,int i,int j,char value)
    {
       int start=j+1;
       while(start<9)
       {
          if(board[i][start]==value)
          {
            return false;
          }
          ++start;
         
       }
       start=j-1;
       while(start>=0)
       {
         if(board[i][start]==value)
         {
            return false;
         }
         --start;
       }
       return true;
    }
     bool CheckColumn(vector<vector<char>>&board,int i,int j,char value)
    {
       int start=i+1;
       while(start<9)
       {
          if(board[start][j]==value)
          {
            return false;
          }
          ++start;
         
       }
       start=i-1;
       while(start>=0)
       {
         if(board[start][j]==value)
         {
            return false;
         }
         --start;
       }
       return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board.size();
        for(int i{};i<m;++i)
        {
            for(int j{};j<n;++j)
            {
                if(board[i][j]!='.')
                {
                  bool box=CheckSubBox(board,i,j,board[i][j]);
                  if(!box)
                   return false;
                  bool row= CheckRow(board,i,j,board[i][j]);
                  if(!row)
                  return false;
                  bool cols=CheckColumn(board,i,j,board[i][j]);
                  if(!cols)
                  return false;
                }
            }
        }
        return true;
    }
};