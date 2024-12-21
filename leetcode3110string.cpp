class Solution {
public:
    int scoreOfString(string s) {
        int a=0,k,i=0,b;
        k=s.length();
        while(k!=1){
         b=abs(s[i]-s[i+1]);
         a=a+b;
         i++;
         k--;
        }
        return a;
        
    }
};