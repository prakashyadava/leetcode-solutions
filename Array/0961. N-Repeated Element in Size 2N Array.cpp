class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto x:mp){
            if(x.second>1){
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};
