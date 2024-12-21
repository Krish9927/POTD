class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        //self 
        int count=0,i=0,a=nums.size();
        while(a!=0){
      if(nums[i]%3==0){
    }
      else{
      count++;}
     a--;
     i++;


        }
        return count;
    }
};