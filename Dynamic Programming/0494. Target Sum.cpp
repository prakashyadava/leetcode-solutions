class Solution {
    
    int findWays(vector<int>nums,int i,int sum,int target,vector<vector<int>>&dp,int TotalSum){
        if(i==nums.size()){
            
        if(sum==target){
            return 1;
        }
            return 0;
        }
        if(dp[i][sum+TotalSum]!=-1){
            return dp[i][sum+TotalSum];
        }        
        return dp[i][sum + TotalSum] = findWays(nums,i+1,sum+nums[i],target,dp,TotalSum)+findWays(nums,i+1,sum-nums[i],target,dp,TotalSum);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int TotalSum = 0;
        for(auto x:nums){
            TotalSum +=x ;
        }
        vector<vector<int>>dp(nums.size()+1,vector<int>(2*TotalSum +1,-1));
        return findWays(nums,0,0,target,dp,TotalSum);
    }
};
