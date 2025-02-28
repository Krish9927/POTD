class Solution {
public:
    int maxArea(vector<int>& height) {
      int n=height.size(),left=0,right=height.size()-1,maxarea=0;
      while(left<right){
       maxarea=max(maxarea,min(height[left],height[right])*(right-left));
       if(height[left]>height[right]){
        right--;
       }
       else{
        left++;
       }
      }
      return maxarea;  
    }
};