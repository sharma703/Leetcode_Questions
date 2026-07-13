class Solution {
public:

    int max_element(vector<vector<int>>& mat, int n, int m, int col){
        int max_ele = -1;
        int index = -1;
        for(int i=0; i<n; i++){
            if(mat[i][col] > max_ele){
                max_ele = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m-1;
        while(low <= high){
            int mid = (low + high) / 2;
            int row = max_element(mat, n, m, mid);

            int left = (mid > 0) ? mat[row][mid-1] : -1;
            int right = (mid < m - 1) ? mat[row][mid+1] : -1;

            if(mat[row][mid] > left && mat[row][mid] > right){
                return {row, mid};
            }
            else if(mat[row][mid] < left) high = mid - 1;

            else{
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};