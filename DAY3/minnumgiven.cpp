class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //optimised solution complexity O(n^2)
        vector<int>ans(nums.size());
        int temp[101]={0};
        //store frequency
        for(int k : nums){
            temp[k]++;
        }
        //store sum of frequency
        for(int i=1;i<101;i++){
            temp[i]+=temp[i-1];
        }
        //store answer
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0)ans[i]=0;
            else ans[i]=temp[nums[i]-1];
         }
         return ans;
        //my solution complexity O(n^2)
        /*
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            v.push_back(count);
        }
        return v;
   */
    }

};