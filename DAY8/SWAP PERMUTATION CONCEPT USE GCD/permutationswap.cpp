#include <bits/stdc++.h>
#include <numeric>
#define int long long
using namespace std;
int gcd(int a,int b){
    while(b!=0){
   int c=a%b;
    a=b;
    b=c;
}
return a;
}
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int gcd_num = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            gcd_num = gcd(gcd_num, abs(arr[i] - (i + 1)));
        }
    }
    cout << gcd_num << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
