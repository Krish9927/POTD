class Solution {
    private:
    int count(vector<int>nums,int k){
        int s=0,e=0,cnt=0;
        while(e<nums.size()){
            if(nums[e++]<=k){
                cnt+=(e-s);
            }
            else{
                s=e;
            }
        }
        return cnt;
    }
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right)-count(nums,left-1);
    }
};
//here we count number of consecutive number less than right and less than smaller of left if we found number of consecutive array 
//because it found consecutive element in range with number of subarrays