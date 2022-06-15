// Kadane's Algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
            currSum += nums[i];
            mx = max(mx,currSum);
            currSum = max(0,currSum);
        }
        return mx;
    }
};
