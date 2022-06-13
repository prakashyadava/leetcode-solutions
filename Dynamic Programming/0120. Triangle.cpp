// by using memoization
class Solution {
public:
    int find(int i ,int j,vector<vector<int>> &triangle, vector<vector<int>> &dp, int n){
        if(i==n-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left  = triangle[i][j] + find(i+1,j,triangle,dp,n);
        int right = triangle[i][j] + find(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(left,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        return find(0,0,triangle,dp,n);
    }
};
