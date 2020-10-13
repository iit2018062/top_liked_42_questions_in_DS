class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    bool isvalid(int row,int col,int m,int n)
    {
      if(row<0||row>=m||col<0||col>=n)
        return false;
      return true;
    }
    void helper(vector<vector<char>>&g,int row,int col,int m,int n)
    {
      if(g[row][col]-'0'==1)
      {
        g[row][col]='0';
        for(int i=0;i<4;i++)
        {
          int x = row+dx[i];
          int y = col+dy[i];
          if(isvalid(x,y,m,n)&& g[x][y]-'0'==1)
          helper(g,x,y,m,n);
        }
      }
    }
    int numIslands(vector<vector<char>>& grid) {
      int ans=0;
      int m = grid.size();
      if(m==0)return ans;
      int n = grid[0].size();
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(grid[i][j]-'0'==1)
          {
            helper(grid,i,j,m,n);
            ans++;
          }
        }
      }
      return ans;
        
    }
};
