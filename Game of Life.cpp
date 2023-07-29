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
    for (auto i : ans)
    {
      for (auto j : i)
        cout << j << " ";
      cout << "\n";
    }
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

*/