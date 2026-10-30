class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = INT_MIN, size = candies.size();
        vector<bool> ans(size, false);

        for (int i = 0; i < size; i++) m = max(m, candies[i]);

        for (int i = 0; i < size; i++) if ((candies[i] + extraCandies) >= m) ans[i] = true;

        return ans;
    }
};