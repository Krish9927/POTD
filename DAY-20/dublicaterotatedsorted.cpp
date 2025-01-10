class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target)
            return true;
         if (nums[s] == nums[mid] && nums[mid]==nums[e]) {
                s++;
                e--;
                continue;
            }
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target <= nums[mid]){
                e=mid-1;}
                else{
                s=mid+1;}
            }
            else{
              if(nums[mid]<=target && target <= nums[e]){
                s=mid+1;}
                else{
              e=mid-1;}
            }
            mid=s+(e-s)/2;
        }
        return false;
    
    }
};
        /* //time complexity o(nlog(n))
        sort(nums.begin(),nums.end());
       auto it= unique(nums.begin(),nums.end());
          nums.erase(it,nums.end());
          int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
             mid=s+(e-s)/2;
        }
        return false;
    
    }
};
*/