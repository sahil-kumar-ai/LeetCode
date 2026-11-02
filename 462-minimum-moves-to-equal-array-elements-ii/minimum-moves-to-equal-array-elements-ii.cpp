class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int size = nums.size(), ans = 0;

        int num = nums.size() & 1 ? nums[size / 2] : (nums[size / 2] + nums[(size / 2) - 1]) / 2;

        for (int i = 0; i < size; i++) ans += abs(nums[i] - num);

        return ans;
    }
};