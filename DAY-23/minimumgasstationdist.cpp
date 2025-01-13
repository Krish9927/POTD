//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    private:
    bool isvalid(vector<int> &stations, int k,double mid){
        int n=stations.size(),reqstation=0;
        for(int i=1;i<n;i++){
            double dist=stations[i]-stations[i-1];
            reqstation += dist/mid;
            int temp=dist/mid;
            if(dist!=0 && temp*mid==dist)reqstation--;
        }
        return reqstation<=k;
    }
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        double s=0,e=1e9,ans=0;
        while(s<=e){
            double mid=s+(e-s)/2;
            if(isvalid(stations,k,mid)){
                ans=mid;
                e=mid -0.00001;
            }
            else{
                s=mid +0.00001;
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends