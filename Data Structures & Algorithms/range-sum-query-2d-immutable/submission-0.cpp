class NumMatrix {
   private:
   vector<vector<int>> sum_mat;

   public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        sum_mat = vector<vector<int>>(rows + 1, vector<int>(cols + 1));

        for (int r = 1; r <= rows; r++) {
            for (int c = 1; c <= cols; c++) {
                sum_mat[r][c] = matrix[r-1][c-1] + sum_mat[r-1][c] + sum_mat[r][c-1] - sum_mat[r-1][c-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++, col1++, row2++, col2++;
        int bottom_right = sum_mat[row2][col2];
        int above = sum_mat[row1 - 1][col2];
        int left = sum_mat[row2][col1 - 1];
        int topleft = sum_mat[row1 - 1][col1 - 1];
        return bottom_right - above - left + topleft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */