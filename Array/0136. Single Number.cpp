class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = 0,i=0;
        for(;i< n-1;i++){
            if(nums[i+1]!=nums[i]){
                res = nums[i];
                
            }
            else{
                i++;
            }
        }
        if(i ==n-1){
            res =  nums[i];
        }
        return res;
        
    }
};
