//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {
        int n= arr.size()-1;
        int s=0,e=n;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k ){
               return mid;
            }
            else if(mid!= n &&arr[mid]<k && arr[mid+1]>k){
                 return mid;
            }
            else if(mid==n && arr[mid]<k){
                return mid;
            }
            else if(arr[mid]<k)
            {
                s=mid+1;
            }
            else{
            e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends