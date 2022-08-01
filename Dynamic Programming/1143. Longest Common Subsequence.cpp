class Solution {
public:
    int solve(string &a,string &b ,int n, int m,vector<vector<int>>&dp){
        if(n<0 || m<0){
            return 0;
        }
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(a[n]==b[m])
            return dp[n][m]=1 + solve(a,b,n-1,m-1,dp);
        
        return dp[n][m]=max(solve(a,b,n-1,m,dp),solve(a,b,n,m-1,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        return solve(text1,text2,text1.size()-1,text2.size()-1,dp);
        
    }
};
