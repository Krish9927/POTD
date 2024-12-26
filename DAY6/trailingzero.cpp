
#include<bits/stdc++.h>
#define int long long
using namespace std;

int factorial(int n)
{
    int d=0,a=5;
 while(a<=n){
    d+=n/a;
    a*=5;
 }
  return d;

}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int n,count=0;
   cin>>n;
   int c=factorial(n);
   cout<<c;
   return 0;    
}
