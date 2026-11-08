class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int rowLen = grid.size(), colLen = grid[0].size();

        vector<int> row(rowLen, 0), col(colLen, 0);

        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (grid[i][j] == 1) {
                    row[i] += 1;
                    col[j] += 1;
                };
            };
        };

        int ans = 0;

        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (grid[i][j] && (row[i] > 1 || col[j] > 1)) ans++;
            }
        };

        return ans;
    }
};