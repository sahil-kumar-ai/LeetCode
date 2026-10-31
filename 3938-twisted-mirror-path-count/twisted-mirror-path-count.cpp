class Solution {
public:
    const int MOD = 1e9 + 7;
    int m, n;

    bool move(int i, int j, int dir, int &x, int &y,
              vector<vector<int>>& grid) {
        x = i;
        y = j;

        if (dir == 0) y++;
        else x++;

        while (x < m && y < n && grid[x][y] == 1) {
            if (dir == 0) {
                dir = 1;
                x++;
            } else {
                dir = 0;
                y++;
            }
        }

        return x < m && y < n;
    }

    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[m - 1][n - 1] = 1;

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (i == m - 1 && j == n - 1) continue;

                int x, y;
                long long ans = 0;

                if (move(i, j, 0, x, y, grid)) ans += dp[x][y];
                if (move(i, j, 1, x, y, grid)) ans += dp[x][y];

                dp[i][j] = ans % MOD;
            }
        }

        return dp[0][0];
    }
};