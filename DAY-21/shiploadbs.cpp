class Solution {
    private :
    int ispossible(vector<int>& weights, int mid){
        int days_count=1;
         int weights_sum=0;
         for(int i=0;i<weights.size();i++){
            if(weights_sum+weights[i]<=mid){
                weights_sum+=weights[i];
            }
            else{
                days_count++;
             weights_sum=weights[i];
            }
           
         }
             return days_count;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0,maxi=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        int s=maxi;
        int e=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
          int dayscount=ispossible(weights,mid);
          if(dayscount<=days){
                e=mid-1;
               
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};