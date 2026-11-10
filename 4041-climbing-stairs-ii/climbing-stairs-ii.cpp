class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;

        for(int i=1; i<=n; i++){
            int oneStep = (dp[i-1] + costs[i-1] + 1);
            int twoStep = INT_MAX, threeStep = INT_MAX;

            if(i >= 2){
                twoStep = (dp[i-2] + costs[i-1] + 4);
            }

            if(i >= 3){
                threeStep = (dp[i-3] + costs[i-1] + 9);
            }

            dp[i] = min({oneStep, twoStep, threeStep});
        }

        return dp[n];
    }
};