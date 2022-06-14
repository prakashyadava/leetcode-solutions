class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int,int>mp;
        for(int a:nums1){
            mp[a]++;
        }
        for(int b:nums2){
            if(mp[b]>=1){
                res.push_back(b);
                mp[b]=0;
            }
        }
        return res;
    }
};
