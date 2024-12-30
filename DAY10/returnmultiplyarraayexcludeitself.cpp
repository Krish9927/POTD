class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output(n);
        output[0]=1;
        for(int i=1;i<n;i++){
            output[i]=output[i-1]*nums[i-1];

        }
        int right=1;
        for(int i=n-1;i>=0;i--){
       output[i]*=right;
       right*=nums[i];
        }
        return output;
        /* my approach
     int n=nums.size(),mul1=1,mul2=1,mul3=1,count=0;
     bool a=false;
      for(int i=0;i<n;i++){
       if(nums[i]==0){
        mul1*=0;
        count++;
       }
       else{
        mul2*=nums[i];
        a=true;
       }
       mul3=mul1*mul2;
      }  
      for(int i=0;i<n;i++){
        if(nums[i]==0&&a==0){
           int d= mul1;
           nums[i]=d;
        }
        
     else if(nums[i]==0&&count>1){
        int d=mul1;
        nums[i]=d;
        }
        else if(nums[i]==0){
            int d=mul2;
            nums[i]=d;
        }
        else{
            int d=mul3/nums[i];
            nums[i]=d;
        }
      }
      return nums;*/
    }
};