class Solution {
public:
    int findMinCost(int i, vector<int>& cost,vector<int>&dp){
       
        if(i>cost.size()-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        if(i==cost.size()-1){
            return cost[i];
        }
        return dp[i]=min(cost[i]+findMinCost(i+1,cost,dp),cost[i]+findMinCost(i+2,cost,dp));
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int>dp(cost.size()+1,-1);
        return min(findMinCost(0,cost,dp),findMinCost(1,cost,dp));
        
    }
};
