class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
       }   
        long int tmp = 0;
        int cpy = x;
        while(x>0){
            int temp = x%10;
            
            tmp = (tmp*10) + temp; 
            x = x/10;
        }
        if(tmp==cpy){
            return true;
        }
        else{return false;}
    }
};
