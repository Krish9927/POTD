#include<bits/stdc++.h>
#define int long long
using namespace std;
bool prime(int n){

    for(int i=2;i*i<=n;i++){
      if(n%i==0)
      return false;
    }
    return true;
}
void solve(int n)
{
    int sum=0;
    int k=n;
    while(k>1){
    int count=0;
for(int i=2;i<=n;i++){
    if(prime(i)){
        if(n%i==0)
         count++;
    }
   
}
if(count==2)
sum+=1;
k--;
n=k;
}
cout<<sum;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   cin>>n;
   
   solve(n);

 }
 