class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false;
        bool dec = false;
        if(nums.size()==1){
            return true;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i])
                inc = true;
            if(nums[i-1]<nums[i]){
                dec = true;
            }
            
        }
        if(inc && dec)
            return false;
        else{
            return true;
        }   
    }
};
