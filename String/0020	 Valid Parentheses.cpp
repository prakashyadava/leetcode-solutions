class Solution {
public:
    bool isValid(string a) {
        stack <char> s;
 int length = a.length();
 char top;

 for(int i = 0; i< length; i++){
  
   if(a[i] == '(' || a[i] == '{' || a[i] == '['){
     s.push(a[i]);
   }
   else
   {
     if(s.empty()){
       
       return false;
     }
      else{
      top = s.top();
        if(a[i] == ')' && top == '(' || 
        a[i] == '}' && top == '{' ||
        a[i] == ']' && top == '[') {
        s.pop();
      }
      else{
        return false;
      }
     }
   }
 }

 if (s.empty()){
   return true;
 }
 else{
  return false;
 }
}
    
};
