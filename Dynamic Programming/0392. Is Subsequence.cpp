class Solution {
public:
    bool check(string s,string t, int n,int m,vector<vector<int>> &dp){
        if(n<0)
            return true;
        if(m<0)
            return false;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n]==t[m])
            return dp[n][m]=check(s,t,n-1,m-1,dp);
        return dp[n][m]=check(s,t,n,m-1,dp);
    }
    bool isSubsequence(string s, string t) {
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
        return check(s,t,s.size()-1,t.size()-1,dp);
    }
};
