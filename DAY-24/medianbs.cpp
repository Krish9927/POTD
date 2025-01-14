class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //binary search
        int l=0,m=nums1.size(),n=nums2.size();
        if(m>n) return findMedianSortedArrays(nums2,nums1);
        int h=m,left=(m+n+1)/2;
         while(l<=h){
        int l1=INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
            int mid1=(l+h)>>1,mid2=left-mid1;
          if(mid1-1>=0) l1=nums1[mid1-1];
          if(mid2-1>=0)l2=nums2[mid2-1];
          if(mid1<m)  r1=nums1[mid1];
          if(mid2<n) r2=nums2[mid2];
          if(l1<=r2&& l2<=r1){
                  if((m+n)%2==1)
                  return max(l1,l2);
                  return (double)(max(l1,l2)+min(r1,r2))/2.0;
                      }
            else if(l1>r2){
            h=mid1-1;
            }
         else{
          l=mid1+1;
         }

         }
         return 0;
    }
};

        /* //two pointer used 
          int m=nums1.size(),n=nums2.size();
          int i=0,j=0,k=m+n;
          vector<int>ans;
          while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
          }
          while(i<m){
            ans.push_back(nums1[i++]);
          }
          while(j<n){
            ans.push_back(nums2[j++]);
          }
          if(k%2==1)
            return ans[k/2];
          return (double)((double)ans[k/2]+(double)ans[k/2-1])/2.0;
          }
        
};
*/
        /* 
        
         int m=nums1.size(),n=nums2.size();
       int s=0,e=(m+n)-1;
       while(s<=e){
          int mid=s+(e-s)/2;
          if(nums1[s]<nums2[s]){
              if()
          }


       }
  //brute force not match complexity
        int s=0;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int e=nums1.size();
        double ans;
        sort(nums1.begin(),nums1.end()); 
          int mid=s+(e-s)/2; 
          if(e%2==0){
          ans=  double(nums1[mid-1]+nums1[mid])/2;
          }
          else{
            ans=nums1[mid];
          }
        
        return ans;

    }
};   */
