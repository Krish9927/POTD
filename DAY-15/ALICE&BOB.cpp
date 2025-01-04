class Solution {
public:
    bool winnerOfGame(string colors) {
        int count1=0,count2=0,n=colors.size();
        for(int i=1;i<n-1;i++){
            if (colors[i - 1] == 'A' && colors[i] == 'A' && colors[i + 1] == 'A') {
                count1++;
            } else if (colors[i - 1] == 'B' && colors[i] == 'B' && colors[i + 1] == 'B') {
                count2++;
            }
            }
                return count1>count2;   
   /*//optimize
        bool k=true;
        while(count1>=0){
            if(k==true){
                if(count1>0){
                count1--;
                k=false;}
                else{
                    return false;
                }
            }
            else if(k== false){
             if(count2>0){
                count2--;
                k=true;
             }
             else{
                return true;
             }
            }
        }
        return false;
  */
    }
};