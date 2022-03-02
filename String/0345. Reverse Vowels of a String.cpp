class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' ||c == 'i' ||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U';
        }
    string reverseVowels(string s) {
         
        int p=0;
        int q =s.length()-1;
        while(p<=q){
            if(isVowel(s[p]) && isVowel(s[q])){
                char ch = s[q];
                s[q] = s[p];
                s[p]= ch;
                p++;
                q--;
                
            }else if(isVowel(s[p])){
                q--;
            }else if(isVowel(s[q])){
                p++;
            }else{
                p++;
                q--;
            }
        }
        return s;
    }
};
