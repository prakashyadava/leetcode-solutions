class Solution {
public:
    int check(vector<int>nums,int sum,int i,vector<vector<int>> &dp){
        if(i>nums.size()-1 || sum<0)
            return 0;
        if(sum==0)
            return 1;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        if(nums[i]<=sum)
            return dp[i][sum] = check(nums,sum-nums[i],i+1,dp) || check(nums,sum,i+1,dp);
        return dp[i][sum]=check(nums,sum,i+1,dp);
        
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum%2!=0){
            return false;
        }
        vector<vector<int>>dp(nums.size()+1,vector<int>(sum/2 +1,-1));
        return check(nums,sum/2,0,dp);
    }
};
