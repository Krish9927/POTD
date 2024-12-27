class Solution {
public:
    bool isHappy(int n) {
             while(n>9){

              int d=n,count=0;      
         while(d!=0){
            d/=10;
            count++;
        }
        int num=0, k=n;
        while(count!=0){
       int d=k%10;
       num+=d*d;
         k/=10;
         count--;
        }
        n=num;
        }
          if(n==1|n==7)
        return true;
        return false;
    }
};