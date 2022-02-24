class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        nums = vector(s.begin(),s.end());
        int temp =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]==temp){
                    temp++;
                }else{
                    return temp;
                }
            }
        }
        return temp;
    }
};
