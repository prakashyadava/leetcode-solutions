class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;
        int ans;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1){
                ans = x.first;
            break;
            }
        }
        return ans;
    }
};
