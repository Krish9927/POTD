class Solution {
public:
    int arrangeCoins(int n) {
        long long s=0,e=n,k,curr;
        while(s<=e){
            k=s+(e-s)/2;
             curr=k*(k+1)/2;
            if(curr==n){
                return (int)k;
            }
            else if(curr>n){
                e=k-1;
            }
            else{
                s=k+1;
            }
        }
        return (int)e;
        /* //lovely approach
        int k=0;
        while(n>0){
        k++;
         n-=k;
        }
        return n==0?k:k-1;
        */
        /*
int i;
int k=n;
for(int i=1;i<=n;i++){
k-=i;
if(k<0){
    return i-1;
}
}
return 1;
*/
    }
};