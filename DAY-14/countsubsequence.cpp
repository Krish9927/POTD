#include<bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;

void solve()
{
    int n,result=0,count=0;
    cin>>n;
    vector<int>arr(n);
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)one++;
        else if(arr[i]==0)zero++;
      }
        cout<<one*(1ll<<zero)<<endl;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n;
   cin>>n;
   while(n--){
   solve();
   }
   return 0;
}