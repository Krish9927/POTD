class Solution {
public:
    string reverseWords(string s) {
        int n=s.size()-1;
        string temp="",ans="";
        for(int i=n;i>=0;i--){
        while(i>=0&&s[i]!=' '){//check first i>=0 not check s[i]!=' '
         temp+=s[i];
         i--;
        }
         reverse(temp.begin(), temp.end());
        if(!temp.empty()){
            if(!ans.empty())
            ans+=" ";
         ans+=temp;
        }
         temp="";
    }
    return ans;
    }
}; 