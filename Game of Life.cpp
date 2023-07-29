//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  void gameOfLife(vector<vector<int>> &board)
  {
  }
};

//{ Driver Code Starts.
int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> image(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        cin >> image[i][j];
    }
    int sr, sc, newColor;
    cin >> sr >> sc >> newColor;
    Solution obj;
    // vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
    // for (auto i : ans)
    // {
    //   for (auto j : i)
    //     cout << j << " ";
    //   cout << "\n";
    // }
  }
  return 0;
}
// } Driver Code Ends

/*

class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int r = b.size(), c = b[0].size();
        vector<vector<int>> ans(r, vector<int>(c));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
                int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

                int o = 0, z = 0;
                for (int idx = 0; idx < 8; idx++) {
                    int nx = i + dx[idx], ny = j + dy[idx];
                    if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
                    b[nx][ny] == 1 ? o++ : z++;
                }

                if (b[i][j] == 1 && o < 2) ans[i][j] = 0;
                else if (b[i][j] == 1 && (o == 2 || o == 3)) ans[i][j] = 1;
                else if (b[i][j] == 1 && o > 3) ans[i][j] = 0;
                else if (b[i][j] == 0 && o == 3) ans[i][j] = 1;
            }
        }

        b = ans;
    }
};






class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> grid=board;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
               // int t=board[i][j];
                int live=0,dead=0;
               // if(t==1){
                    if(i-1>=0  && j-1>=0)
                    {
                        int t1=board[i-1][j-1];
                        if(t1==0)dead++;
                        else live++;
                    }
                     if(i-1>=0  )
                    {
                        int t1=board[i-1][j];
                        if(t1==0)dead++;
                        else live++;
                    }

                    if(i-1>=0  && j+1<m)
                    {
                        int t1=board[i-1][j+1];
                        if(t1==0)dead++;
                        else live++;
                    }
                    if(i>=0  && j-1>=0)
                    {
                        int t1=board[i][j-1];
                        if(t1==0)dead++;
                        else live++;
                    }
                    if( j+1<m)
                    {
                        int t1=board[i][j+1];
                        if(t1==0)dead++;
                        else live++;
                    }
                    if(i+1<n  && j-1>=0)
                    {
                        int t1=board[i+1][j-1];
                        if(t1==0)dead++;
                        else live++;
                    }
                     if(i+1<n  )
                    {
                        int t1=board[i+1][j];
                        if(t1==0)dead++;
                        else live++;
                    }
                     if(i+1<n  && j+1<m)
                    {
                        int t1=board[i+1][j+1];
                        if(t1==0)dead++;
                        else live++;
                    }

if(board[i][j]==1)
{
    if(live<2)grid[i][j]=0;
    if(live==2 || live==3)grid[i][j]=1;
    if(live>3)grid[i][j]=0;
}
else if(board[i][j]==0)
{
    if(live==3)grid[i][j]=1;
}
    else
    grid[i][j]=board[i][j];
            }
        }
        board=grid;


    }
};










void gameOfLife(vector<vector<int>>& board) {
    int m = board.size(), n = m ? board[0].size() : 0;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            int count = 0;
            for (int I=max(i-1, 0); I<min(i+2, m); ++I)
                for (int J=max(j-1, 0); J<min(j+2, n); ++J)
                    count += board[I][J] & 1;
            if (count == 3 || count - board[i][j] == 3)
                board[i][j] |= 2;
        }
    }
    for (int i=0; i<m; ++i)
        for (int j=0; j<n; ++j)
            board[i][j] >>= 1;
}





class Solution {
public:
    int cal(vector<vector<int>>board,int i,int j)
    {
        int n=board.size(),m=board[0].size();
        int sum=0;
        if(i>0)  sum+=board[i-1][j];//up
        if(i<n-1) sum+=board[i+1][j];//down
        if(j>0) sum+=board[i][j-1];//left
        if(j<m-1) sum+=board[i][j+1];//right
        if(i>0 && j>0) sum+=board[i-1][j-1];//top left diagonal
        if(i<n-1 && j>0) sum+=board[i+1][j-1];//down left diagonal
        if(i>0 && j<m-1) sum+=board[i-1][j+1];//top right diagonal
        if(i<n-1 && j<m-1) sum+=board[i+1][j+1];//down right diagonal
        return sum;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
      vector<vector<int>> ans(n,vector<int>(m));
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              int sum=cal(board,i,j);
              if(board[i][j]==0 && sum==3)
              ans[i][j]=1;
              else
              ans[i][j]=0;
              if(board[i][j]==1 &&sum<2)
              ans[i][j]=0;
              else if(board[i][j]==1 && sum==2 ||sum==3)
              ans[i][j]=1;
              else
              ans[i][j]=0;
          }
      }
        board=ans; 
    }
};




class Solution {
public:
    
    int noOfOnes(int i, int j ,vector<vector<int>>& board, int m, int n ){
        int count =0;
        
        if(i>0 and board[i-1][j]>=1 ) count++;
        if(i<m-1 and board[i+1][j]>=1 ) count++;
        if(j>0 and board[i][j-1]>= 1 ) count++;
        if(j<n-1 and board[i][j+1]>=1 ) count++;
        if(i>0 and j>0 and board[i-1][j-1]>= 1) count++;        
        if(i<m-1 and j<n-1 and board[i+1][j+1]>= 1) count++;
        if(i<m-1 and j>0 and board[i+1][j-1]>= 1) count++;
        if(i>0 and j<n-1 and board[i-1][j+1]>= 1 ) count++;
        
        return count;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        
        int m = board.size();
        int n= board[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n ; j++){
                if(board[i][j]==0){
                    if(noOfOnes(i,j,board,m,n)==3){
                        board[i][j]=-1;
                    }
                }else if(board[i][j]==1){
                    if(noOfOnes(i,j,board,m,n) < 2){
                        board[i][j] =2;
                    }else if(noOfOnes(i,j,board,m,n) >3){
                        board[i][j] =2;
                    }
                }
            }
        }
        
         for(int i=0; i<m; i++){
            for(int j=0; j<n ; j++){
              if(board[i][j]==2){
                  board[i][j]=0;
              }else if(board[i][j]==-1){
                  board[i][j]=1;
              }
            }
         }  
    }
};

*/