class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,bool>mp1;
        for(int i=0;i<t.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i])
                    return false;
            }
            else{
                if(mp1[t[i]]!=true){
                    mp[s[i]]=t[i];
                    mp1[t[i]]= true;
                }
                else{
                return false;
                }
            }
        }
        return true;
    }
};
