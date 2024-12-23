class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='O'){
               
            }
          // else if(s[i]=='X'||s[i+1]=='X'||s[i+2]=='X')
           else
           { count++;
                i+=2;
            }
        }
        return count;
    }
};