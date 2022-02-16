class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mP = 0, m = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            m = min(m, prices[i]);
            mP = max(mP, prices[i]-m);
        }
        return mP;
        
    }
};
