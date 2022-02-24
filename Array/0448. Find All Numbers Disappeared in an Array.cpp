class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // set<int> s;
        // int n = nums.size();
        // for(auto x:nums){
        //     s.insert(x);
        // }
        // nums = vector(s.begin(),s.end());
        sort(nums.begin(),nums.end());
        vector<int> res;
        int temp =1;
        
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(auto x:nums){
            s.insert(x);
        }
        // nums = vector(s.begin(),s.end());
        vector<int> res;
//         int temp =1;
//         for(int i=0;i<nums.size();i++){
//             if(temp==nums[i]){
//                 temp++;
//             }else{
//                 res.push_back(temp);
//                 temp++;
//                 i--;
//             }
//         }
//         int diff = n-nums.size();
//         if(diff==res.size())
//             return res;
//         else{
//             for(int i=0;i<diff-res.size();i++){
                
//                 res.push_back(temp);
//                 temp++;
//             }
//             return res;
            
//         }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end())
                res.push_back(i);
        }
        return res;
    }
};
