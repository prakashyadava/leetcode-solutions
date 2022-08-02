class Solution {
public:
    int solve(vector<vector<int>>& arr,int n,int m,vector<vector<int>>&dp){
        if(n<0 || m<0)
            return 0;
        if(n==0 && m==0){
            if(arr[n][m]!=1)
                return 1;
            return 0;
        }
            
        if(arr[n][m]==1)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        return dp[n][m] = solve(arr,n-1,m,dp) + solve(arr,n,m-1,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(obstacleGrid,n-1,m-1,dp);
    }
};
