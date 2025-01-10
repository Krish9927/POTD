class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int s=0,e=(row*col)-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(target==matrix[mid/col][mid%col]){
                return true;
            }
            else if(target>matrix[mid/col][mid%col]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};