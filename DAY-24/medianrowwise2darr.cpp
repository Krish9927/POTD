//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    private:
    int upperbound(vector<int>&arr,int mid,int col){
       int low=0,ans=col,high=col-1;
       while(low<=high){
           int mid1=low+(high-low)/2;
           if(arr[mid1]>mid){
               ans=mid1;
               high=mid1-1;
           }
           else{
               low=mid1+1;
           }
       }
       return ans;

    }
    private:
    int blackbox(vector<vector<int>> &mat,int m,int n,int mid){
    int cnt=0;
    for(int i=0;i<m;i++){
        cnt+=upperbound(mat[i],mid,n);
    }
        return cnt;
    }
    
  public:
    int median(vector<vector<int>> &mat) {
        int row=mat.size(),column=mat[0].size(),low=INT_MAX,high=INT_MIN;
        for(int i=0;i<row;i++){
            low=min(low,mat[i][0]);
            high=max(high,mat[i][column-1]);
        }
        int req=(row*column)/2;
        while(low<=high){
         int mid=low+(high-low)/2;
         int smallerequal=blackbox(mat,row,column,mid);
         if(smallerequal<=req)
         low=mid+1;
         else
         high=mid-1;
        }
        return low;
        /* //brute force 
        int row=mat.size(),column=mat[0].size();
           int mid=(row*column)/2;         
         vector<int>ans;
         for(int i=0;i<row;i++){
             for(int j=0;j<column;j++){
                 ans.push_back(mat[i][j]);
             }
         }
         sort(ans.begin(),ans.end());
         
         return ans[mid];
         */
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        int ans = -1;
        ans = obj.median(matrix);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends