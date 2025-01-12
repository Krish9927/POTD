//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private :
    bool checkmax(vector<int> &stalls, int k,int mid){
        int cow_count=1,last_el=stalls[0];
        for(int i=0;i<stalls.size();i++){
            if(stalls[i]-last_el>=mid){
                cow_count++;
                if(cow_count==k){
                    return true;
                }
                last_el=stalls[i];
            }
        }
        return false;
    }
    
  public:

    int aggressiveCows(vector<int> &stalls, int k) {
       int s=0,maxi=-1,ans=-1;
       sort(stalls.begin(),stalls.end());
       for(int i=0;i<stalls.size();i++){
           maxi+=stalls[i];
       }
       int e=maxi;
       while(s<=e){
           int mid=s+(e-s)/2;
           if(checkmax(stalls,k,mid)){
               ans=mid;
               s=mid+1;
           }
           else{
               e=mid-1;
           }
       }
       return ans;
       
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends