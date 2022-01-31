class Solution {
public:
    string reverseWords(string s) {
         vector<int> v;
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                count++;
            }
            else{
                v.push_back(count);
                count=0;
            }
        }
        v.push_back(count);
        int temp =0;
        int tmp = v[temp];
       
        int sum = v[0];
        
        string newS = s;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                temp++;
                sum += v[temp];
                tmp = sum;
                tmp += temp;
            }
            else{
                newS[tmp-1] = s[i];
                tmp--;
            }
        }
        return newS;
        
    }
};
