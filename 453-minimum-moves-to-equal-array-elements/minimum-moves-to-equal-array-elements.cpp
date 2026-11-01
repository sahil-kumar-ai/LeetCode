class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int sum = 0;

        for (int elem : nums) sum += mn - elem;

        return abs(sum);
    }
};