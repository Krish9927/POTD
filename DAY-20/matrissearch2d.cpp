class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int rowindex=0,colindex=col-1;
         while(rowindex<row&&colindex>=0){
          int element=matrix[rowindex][colindex];
          if(element==target){
            return true;
          }
          if(element>target){
            colindex--;
          }
          else{
            rowindex++;
          }
         }
         return false;
    }
};
