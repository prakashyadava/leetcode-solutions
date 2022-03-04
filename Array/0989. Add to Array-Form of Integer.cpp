// runtime error
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int sum = 0;
        for(int i=0;i<num.size();i++){
            sum = sum*10 + num[i];
            
        }
        sum = sum + k;
        vector<int> arr;
        while(sum>0){
            int tmp = sum%10;
            sum = sum/10;
            arr.push_back(tmp);
        }
        reverse(arr.begin(), arr.end());
        return arr;
    }
};
