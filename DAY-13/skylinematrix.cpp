class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int size=grid.size(),sum=0;
        vector<int>leftview(size);
        vector<int>rightview(size);
        for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
           leftview[i]= max(leftview[i],grid[i][j]);
           rightview[i]=max(rightview[i],grid[j][i]);
         }
        }
        /*
        vector<vector<int>> newgrid(size, vector<int>(size));
        */
        for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
            sum+=(min(leftview[i],rightview[j])-grid[i][j]);
         }
        }
        /*
        for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
            sum+=(newgrid[i][j]-grid[i][j]);
         }
        }
        */
        return sum;
    }
};