class Solution {
public:
    bool solve(vector<int>&nums,int i,int n,vector<int>&dp){
        if(i>=n-1)
            return true;
        if(dp[i]!=-1)
            return dp[i];
        bool val = false;
        for(int j=1;j<=nums[i];j++){
            val = val || solve(nums,i+j,n,dp);
            if(val){
                return dp[i]=val;
            }
        }
        return dp[i]=val;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,n,dp);
    }
};
