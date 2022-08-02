class Solution {
public:
    int mod = 1e9 + 7;
    long long solve(int i,int j,int m,int n,int maxMove,vector<vector<vector<int>>>&dp){
        if(i<0 || j<0 || i>=m || j>=n)
            return 1;
        if(dp[i][j][maxMove]!=-1)
            return dp[i][j][maxMove];
        if(maxMove>0)
            return dp[i][j][maxMove]=(solve(i-1,j,m,n,maxMove-1,dp)%mod + solve(i,j-1,m,n,maxMove-1,dp)%mod + solve(i+1,j,m,n,maxMove-1,dp)%mod + solve(i,j+1,m,n,maxMove-1,dp)%mod)%mod;
        return dp[i][j][maxMove]=0;
        
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        return solve(startRow,startColumn,m,n,maxMove,dp);
    }
};
