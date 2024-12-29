 #include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],sum=0,count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=abs(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(sum+arr[i]>=sum){
           continue;
        }
        else{
            count++;
            int j=i+1;
            while(arr[j]<=0&&j<n){
                j++;
                i++;
            }
        }
    }
     cout<<sum<<" "<<count<<endl;
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
