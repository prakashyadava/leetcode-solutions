class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> arr;
        for(auto x :nums){
            arr.insert(x);
        }
        nums = vector(arr.begin(), arr.end());
        return arr.size();
    }
};
