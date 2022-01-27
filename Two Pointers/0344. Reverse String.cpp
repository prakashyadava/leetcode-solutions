class Solution {
public:
    void reverseString(vector<char>& s) {
        int p =0;
        int q = s.size()-1;
        while(p<=q){
            char temp = s[p];
            s[p] = s[q];
            s[q]=temp;
            p++;
            q--;
        }
    }
};
