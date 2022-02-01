class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        string str1 = "[.]";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.'){
                str += address[i];
            }
            else{
                str += str1;
            }
        }
        return str;
    }
};
