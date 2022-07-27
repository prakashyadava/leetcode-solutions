class Solution {
public:
    int minCoin(vector<int>&coins,int i,int n,int amount,vector<vector<int>>&dp){
        if(i==n){
            if(amount==0){
                return 0;
            }
            return 1e7;
        }
            
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        if(coins[i]<=amount)
            return dp[i][amount] = min(1+minCoin(coins,i,n,amount-coins[i],dp),minCoin(coins,i+1,n,amount,dp));
        return dp[i][amount]=minCoin(coins,i+1,n,amount,dp);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans  =minCoin(coins,0,coins.size(),amount,dp);
        if(ans==1e7)
            return -1;
        return ans;
        
    }
};
