class Solution {
public:
    bool isPerfectSquare(int x) {
        // long long int a = 0;
        // if(x==1 || x==2 )return 1;
        // for (long long int i = 0; i <= x/2; i++)
        // {
        //     if (i * i == x)
        //     {
        //         return true;
        //         break;
        //     }
        // }
        // return false;
        long long int i = 0;
        if(x==1)return true;
        while(i*i<x){
            i++;
        }
        return i*i==x;
    }
    
};
