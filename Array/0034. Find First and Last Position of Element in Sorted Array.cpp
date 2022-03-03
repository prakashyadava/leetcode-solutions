class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        
        
        bool visited = false;
        int begin = 0;
        int end = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && !visited){
                begin = i;
                end = i;
                visited = true;
                arr.push_back(begin);
                arr.push_back(end);
            }
            else if(nums[i]==target && visited){
                end = i;
                arr[1]=i;
                
            }
        }
        if(nums.size()==0 || !visited){
            arr.push_back(-1);
            arr.push_back(-1);
            return arr;
        }
        return arr;
        
    }
};
