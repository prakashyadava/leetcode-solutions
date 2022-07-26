class Solution {
public:
    int minPath(vector<vector<int>>& grid,int i,int j,vector<vector<int>> &dp){
        if(i<0 || j<0){
            return 1e9;
        }
        if(i==0 && j==0){
            return grid[0][0];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left = grid[i][j] + minPath(grid,i,j-1,dp);
        int up = grid[i][j] + minPath(grid,i-1,j,dp);
        return dp[i][j]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
    
        int i = grid.size();
        int j= grid[0].size();
        vector<vector<int>> dp(i,vector<int>(j,-1));
        return minPath(grid,i-1,j-1,dp);
    }
};
