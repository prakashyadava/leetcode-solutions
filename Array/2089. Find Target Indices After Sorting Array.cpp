class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                arr.push_back(i);
        }
        return arr;
    }
};
