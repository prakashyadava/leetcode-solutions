class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int ans,temp1=3,temp2=2;
        for(int i=4;i<=n;i++){
            ans = temp1 + temp2;
            temp2 = temp1;
            temp1 = ans;
        }
        return ans;
    }
};
