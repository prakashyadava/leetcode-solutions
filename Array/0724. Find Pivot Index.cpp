class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int x:nums)
            sum+=x;
        int left = 0;
        for(int i=0;i<nums.size();i++){
            if(left==(sum-left-nums[i]))
                return i;
            left += nums[i];
        }
        return -1;
    }
};
