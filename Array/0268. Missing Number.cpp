class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff = 0;
        int res = 0;
        int n = nums.size();
        int i = 0;
        for(;i<n;i++){
            if(res==nums[i]){
                res++;
            }
        }
        return res;
        
    }
};
