class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size=original.size();
        if(size!=m*n){
            return {};
        }
         vector<vector<int>>arr(m,vector<int>(n));
     for(int i=0;i<size;i++){
        int row=i/n,col=i%n;//here we learn how to run a single loop and intialize value of 2 d array
        arr[row][col]=original[i];
        
     }
     return arr;
       
    }
};
    