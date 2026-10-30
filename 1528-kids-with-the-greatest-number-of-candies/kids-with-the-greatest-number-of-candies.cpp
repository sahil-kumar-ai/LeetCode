class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = INT_MIN, size = candies.size();
        vector<bool> ans;

        for (int i = 0; i < size; i++) m = max(m, candies[i]);

        for (int i = 0; i < size; i++) {
            if ((candies[i] + extraCandies) >= m) ans.push_back(true);
            else ans.push_back(false);
        };

        return ans;
    }
};