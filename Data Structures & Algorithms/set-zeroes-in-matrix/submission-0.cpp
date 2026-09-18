class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }

        for(int i=0;i<v.size();i++){
            if(i%2==0){
               for(int j=0;j<m;j++){
                matrix[v[i]][j]=0;
               }
            } else{
                for(int j=0;j<n;j++){
                    matrix[j][v[i]]=0;
                }
            }
        }
    }
};
