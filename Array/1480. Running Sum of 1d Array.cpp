class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp =0;
        vector<int>ans;
        for(int a:nums){
            temp += a;
            ans.push_back(temp);
        }
        return ans;
    }
};
