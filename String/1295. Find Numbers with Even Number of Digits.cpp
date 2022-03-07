class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto x : nums){
            string s = to_string(x);
            if(s.size()%2==0)
                count++;
        }
        return count;
    }
};
