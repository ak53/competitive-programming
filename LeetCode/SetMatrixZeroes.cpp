class Solution {
public:
    void func(vector<vector<int>>& matrix, int r, int c,int n, int m){
        for (int i=0;i<m;i++){
            matrix[r][i]=0;
        }
        for (int i=0;i<n;i++){
           matrix[i][c]=0; 
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> cords;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (matrix[i][j]==0){
                    cords.push_back({i,j});
                }
            }
        }
        for (int i=0;i<cords.size();i++){
            func(matrix,cords[i][0],cords[i][1],n,m);
        }
    }
};