class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()!=b.length()){
            if(a.length()>b.length()){
                int diff = a.length()-b.length();
                string str = "";
                for(int i=0;i<diff;i++){
                    str += '0';
                    
                }
                b = str + b;
            }else{
                int diff = b.length()-a.length();
                string str = "";
                for(int i=0;i<diff;i++){
                    str += '0';
                    
                }
                a = str + a;
            }
        }
        char carry ='0';
        string res = "";
        for(int i=0;i<a.length();i++){
            res += '0';
        }
        
        for(int i=a.length()-1;i>=0;i--){
            if(a[i]=='0' && b[i]=='0'){
                res[i] = carry;
                if(carry!='0'){
                    carry = '0';
                }
            }else if((a[i]=='0' && b[i]=='1')||(a[i]=='1' && b[i]=='0')){
                if(carry!='1'){
                    res[i]= '1';
                }else{
                    res[i]='0';
                    carry = '1';
                }
            }else if(a[i]=='1' && b[i]=='1'){
                if(carry!='1'){
                    res[i]= '0';
                    carry='1';
                }else{
                    res[i]= '1';
                    carry = '1';
                }
            }
        }
        if(carry!='1'){
            return res;
        }else{
            res = carry + res;
            return res;
        }
        
    }
};
