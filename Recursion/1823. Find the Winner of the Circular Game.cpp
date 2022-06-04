class Solution {
public:
    int ans(int n,int k){
        if(n==1){
            return 0;
        }
        return (ans(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        return ans(n,k)+1;
    }
};
