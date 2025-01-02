#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n,int k)
{
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>> arr[i];
}
  int find=arr[k-1],count=0;
for(int i=0;i<n;i++){
    if(find==0){
        if(arr[i]>find)
        count++;
    }
    else if(arr[i]>=find)
    count++;
}
cout<<count;
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n,k;
   cin >>n>>k;
   solve(n,k);
   return 0;
}