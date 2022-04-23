class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        long sum = 0;
        for(long i=1;i<=n;i++){
            sum = sum + i;
            if(sum<=n){
                count++;
            }else{
                return count;
            }
        }
        return count;
    }
};
