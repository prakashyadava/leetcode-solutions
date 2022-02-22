class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int i=0,j=0;
        while(i<m){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            arr.push_back(nums2[j]);
            j++;
        }
        sort(arr.begin(),arr.end());
        nums1 = arr;
    }
};
