class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) arr.push_back({i, j});
            }
        }

        for (auto p : arr) {
            int row = p.first;
            int col = p.second;

            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0;
            }

            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][col] = 0;
            }
        }
    }
};