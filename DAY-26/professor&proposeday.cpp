#include<bits/stdc++.h>
#define int long long
using namespace std;

bool solve(string &s, string &p){
    if(s.length() < p.length()) return false;
    map<int,int> mpp1, mpp2;
 
    int i = 0, j = 0;
    int count = 1;
    int n = s.length();
    while(i < n-1){
        if(s[i] == s[i+1]) count++;
        if(i == n-2 || s[i] != s[i+1]){
            mpp1[j++] = count;
            count = 1;
        }
        i++;
    }
    if(s[n-1] != s[n-2]) mpp1[j++] = 1;
 
    i = 0, j = 0;
    count = 1;
    n = p.length();
    while(i < n-1){
        if(p[i] == p[i+1]) count++;
        if(i == n-2 || p[i] != p[i+1]){
            mpp2[j++] = count;
            count = 1;
        }
        i++;
    }
    if(p[n-1] != p[n-2]) mpp2[j++] = 1;
 
    if(mpp1.size() != mpp2.size()){
        return false;
    }
 
    int in1 = 0, in2 = 0;
    for(int i=0 ; i<mpp1.size() ; i++){
        if(s[in1] != p[in2]) return false;
        if(mpp1[i] < mpp2[i] || (mpp1[i] > mpp2[i] && mpp1[i]<3)) return false;
        in1 += mpp1[i];
        in2 += mpp2[i];
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      string s;
    int n;
    int count = 0;
    cin>>s>>n;
 
    vector<string> arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        if(solve(s,arr[i])) count++;
    }
    cout<<count;
    return 0;
}
