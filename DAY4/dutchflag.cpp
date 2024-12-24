class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch algorithm
        int low =0,mid=0,high=nums.size()-1;
        while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
        }
       //selection sort
       /*int n=nums.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         if(nums[i]>nums[j])
         {
            swap(nums[i],nums[j]);
         }
        }
       }*/
       //bubble sort
       /*int n=nums.size();
              for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){ 
         if(nums[j]>nums[j+1])
         {
            swap(nums[j],nums[j+1]);
         }
        }
       }*/
    //insertion sort
    /*
           int n=nums.size();
              for(int i=1;i<n;i++){
                int temp=nums[i];
                int j=i-1;
             while(j>=0&&nums[j]>temp){
                nums[j+1]=nums[j];
                j=j-1;
             }
        nums[j+1]=temp;
       }
       */
    }
};