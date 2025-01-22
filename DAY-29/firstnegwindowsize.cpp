//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int i=0,j=0,n=arr.size(),m=n-k+1;
        deque<long long>ans;
        vector<int>res;
        while(j < n){
            if(arr[j]<0){
                ans.push_back(arr[j]);
            }
            if(j-i+1==k){
                if(!ans.empty()){
                res.push_back(ans.front());
                }
                else{
                    res.push_back(0);
                }   
            if(arr[i] < 0 && !ans.empty()){
                ans.pop_front();
            }
            i++;
            }
            j++;
        }
    
        return res;
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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends