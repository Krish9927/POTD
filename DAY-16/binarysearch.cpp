class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size()-1;
        int s=0,e=n;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
               return mid;
            }
            else if(nums[mid]<target){
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