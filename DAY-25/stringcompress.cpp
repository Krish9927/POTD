class Solution {
public:
    int compress(vector<char>& chars) {
     int n=chars.size();
     int temp=0;
     for(int i=0;i<n;i++){
        char ch=chars[i];
        int count=0;
        while(i<n&&ch==chars[i]){
            count++;
            i++;
        }
        if(count==1){
        chars[temp++]=ch;
        }
        else{
      chars[temp++]=ch;
      string str=to_string(count);
      for(char c :str){
        chars[temp++]=c;
      }
        }
        i--;
     }
     chars.resize(temp);
     return temp;
    }
};