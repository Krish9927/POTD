class Solution {
    private:
    bool checksum(vector<int>& piles, int h,int k){
      int hours=0;
      for(int pile : piles){
        hours+=(pile+k-1)/k ;//ceil((double)pile/k)
        if(hours>h) return false;
      }
      return hours<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1,e=*max_element(piles.begin(),piles.end());
        while(s<e){
            int mid=s+(e-s)/2;
            if(checksum(piles,h,mid)){
            e=mid;
            }
            else{
                s=mid+1;
            }
        }
        return s;
    }
};