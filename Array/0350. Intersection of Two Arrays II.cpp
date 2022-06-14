class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int,int>mp;
        for(int a:nums1){
            mp[a]++;
        }
        for(int b:nums2){
            if(mp[b]>0){
                res.push_back(b);
                mp[b]--;
            }
        }
        return res;
            
    }
};
