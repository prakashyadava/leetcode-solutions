class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
       unordered_set<int> x;
        for(auto i: v){
            x.insert(i);
        }
        if(x.size() == v.size()){
            return false;    
        }
        else{
            return true;
        }
    }
};
