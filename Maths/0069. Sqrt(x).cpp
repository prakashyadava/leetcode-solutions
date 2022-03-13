class Solution {
public:
    int mySqrt(int x) {
        long long int a = 0;
        if(x==1 || x==2 )return 1;
        for (long long int i = 0; i < x; i++)
        {
            if (i * i > x)
            {
                a = i-1;
                break;
            }
        }
        return a;
    }
    
