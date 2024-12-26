class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    vector<int>v;
       
        int d=0,m=bank.size(),n=bank[0].size(),total;
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++)
            {
           if(bank[i][j]=='1')
               count++;
            }
            if(count!=0)
            v.push_back(count);
        }
    for(int i=1;i<v.size();i++){
        total=v[i-1]*v[i];
        d+=total;
    }
        return d;
    }
    
};