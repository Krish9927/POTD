#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int num,cnt=0;
    cin>>num;
for(int i=1;i<=num;i++){
    if(num%i!=0)
    break;
cnt++;
}
cout<<cnt<<endl;
  

}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   cin >>n;
   while(n--){
   solve();
   }
   return 0;
}