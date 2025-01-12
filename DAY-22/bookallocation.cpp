//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    private :
    bool calcpage(vector<int> &arr, int k,int mid){
        int st_count=1,sum=0;
        for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
        st_count++;
        if(st_count>k||arr[i]>mid){
            return false;
        }
        sum=arr[i];
        }
        }
        return true;
    }
  public:
    int findPages(vector<int> &arr, int k) {
        int s=0,sum=0,ans=-1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(arr.size()>=k){
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(calcpage(arr,k,mid)){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
            }
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

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends