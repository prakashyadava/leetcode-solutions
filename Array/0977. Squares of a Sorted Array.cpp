class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        vector<int> nums(arr.size());
        
        int p =0;
        
        int q= arr.size()-1;
        int k = q;
    while(p<=q){
        if(arr[p]<0){
            arr[p] = arr[p]*(-1);
        }
        if(arr[q]<0){
            arr[q] = arr[q]*(-1);
        }
        if(arr[p]>arr[q]){
            nums[k] = arr[p] *arr[p];
            p++;
            k--;
        }else{
            nums[k] = arr[q] *arr[q];
            q--;
            k--;
        }
    }
    
        return nums;
    }
};
