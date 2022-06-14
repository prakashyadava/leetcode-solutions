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
// o(n)
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        int n = nums.size();
        int carry = 0;
        for(int i=0;i<n;i++){
            int rem = k%10;
            int temp = nums[i] + rem + carry;
            if(temp>9){
                carry = temp/10;
                nums[i] = temp%10;
                k = k/10;
            }
            else{
                nums[i]+= rem + carry;
                carry =0;
                k=k/10;
            }
        }
        k +=carry;
        while(k!=0){
            nums.push_back(k%10);
            k = k/10;
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};
