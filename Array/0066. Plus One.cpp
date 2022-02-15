class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr;
        int count = 0;
        int last = digits.size();
        
            count = (digits[last-1] + 1)/10;
            arr.push_back( (digits[last-1] + 1)%10);
        
        for(int i=last-2;i>=0;i--){
           if((digits[i] + count)>=10){
            count = (digits[i] + 1)/10;
            arr.push_back((digits[i] + count)%10);
        }
            else{
                if(count!=0){
                arr.push_back((digits[i] + count)%10);
                    count = 0;
                }
                else{
                    arr.push_back((digits[i] + count)%10);
                }
            }
            
        }
        if(count==0){
            reverse(arr.begin(), arr.end());
            return arr;
        }else{
            arr.push_back(count);
            reverse(arr.begin(), arr.end());
            return arr;
            
        }
    }
};
