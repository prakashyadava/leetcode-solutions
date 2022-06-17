class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int curr = 0;
        for(int x:nums){
            if(x){
                curr++;
            }
            else{
                ans = max(curr,ans);
                curr = 0;
            }
        }
        return max(ans,curr);
    }
};
