class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int l = 0;
        int r = len-1;
       return bs(nums,l,r,target);
        
    }
     int bs(vector<int>& arr,int l,int r,int t){
            if(r>=l){
        int mid = l + (r-l)/2;
        if(arr[mid]==t){
            return mid;
        }
        if(arr[mid]>t){
            return bs(arr,l,mid-1,t);
        }
        else{
            return bs(arr,mid+1,r,t);
        }
    }
    return -1;
        }
};
