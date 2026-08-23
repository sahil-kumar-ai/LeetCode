class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, size = mat.size();

        if (size == 1) return mat[0][0];

        for (int i = 0; i < size; i++) {
            int left = 0 + i, right = (size - 1) - i;

            if (left != right) {
                sum += mat[i][left] + mat[i][right];
            } else sum += mat[i][left];
        }

        return sum;
    }
};