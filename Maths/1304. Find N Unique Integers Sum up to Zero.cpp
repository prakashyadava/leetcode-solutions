class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v (n);
        int sum = 0;
        for(int i=0;i<n-1;i++){
            v[i] = i+1;
            sum = sum +(i+1);
        }
        v[n-1] = -sum;
        return v;
    }
};
