#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    private:
    bool checkpainter(vector<int>& arr,int mid, int k){
        int sum=0,cnt=1;
        for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            cnt++;
            if(cnt>k||arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
        }
        return true;
    }
  public:
    int minTime(vector<int>& arr, int k) {
        int s=0,max=0,ans=-1;
        for(int i=0;i<arr.size();i++){
            max+=arr[i];
        }
        int e=max;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(checkpainter(arr,mid,k)){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends