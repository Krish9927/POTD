class Solution {
  public: 
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n=arr.size(),maxi=0,j=0,sum=0;
        for(int i=0;i<n;i++){
            if(i>k-1){
                sum=sum-arr[j]+arr[i];
                maxi=max(maxi,sum);
                j++;
            }
            else{
                sum+=arr[i];
                maxi=max(maxi,sum);
            }
            
            
        }
        return maxi;
    }
};