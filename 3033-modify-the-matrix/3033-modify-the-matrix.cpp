class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0;i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == -1){
                    int maxi = INT_MIN;
                    for(int k = 0; k < n; k++){
                        if(matrix[k][j] > maxi){
                            maxi = matrix[k][j];
                        }
                    }
                    matrix[i][j] = maxi;
                }
            }
        }
        return matrix;
    }
};