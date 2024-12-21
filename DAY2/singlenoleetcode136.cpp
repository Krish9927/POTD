class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //self
        int b=0,i=0,a=nums.size();
       while(a!=0){
       b=b^nums[i];
       a--;
       i++;
       }
       return b;
    }
};