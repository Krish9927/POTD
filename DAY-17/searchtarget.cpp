class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    //time complexity O(n)
    int s=0,e=nums.size();
    int mid=s+(e-s)/2;
    if(target>nums[e-1]){
        return e; 
    }
     while(s<=e){
        if(nums[mid]==target){
            return mid;
        }
        else if(target<nums[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
     }
return s;
/*
        int b;
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        auto a=unique(nums.begin(),nums.end());
        nums.erase(a,nums.end());
   for(int i=0;i<nums.size();i++){
      if(target==nums[i]){
            b=i;
            return b;
            }
       }
    return -1;
  */
    }
};