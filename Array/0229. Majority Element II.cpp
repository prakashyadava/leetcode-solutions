class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> arr;
        for(auto x: mp){
            if(x.second>(nums.size()/3)){
                arr.push_back(x.first);
            }
        }
        return arr;
    }
};
