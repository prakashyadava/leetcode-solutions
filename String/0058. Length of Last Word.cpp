class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int chk = 0;
        int out = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(chk!=0){
                    break;
                }
            }else{
                out++;
                chk=1;
            }
        }
        return out;
    }
};
