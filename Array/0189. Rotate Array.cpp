class Solution {
public:
    void rotate(vector<int>& num, int k) {
        int i=0,j = num.size() -1;
        vector<int> arr(num.size());
        int x = num.size();
        while(i<=j){
            
            arr[(i+k)%x] = num[i];
                i++;
            arr[(j+k)%x] = num[j];
                j--;
            
            
        }
        for(int i =0;i<arr.size();i++){
            num[i] = arr[i];
        }
    }
};
