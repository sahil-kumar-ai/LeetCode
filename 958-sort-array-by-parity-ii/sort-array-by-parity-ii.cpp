class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size = nums.size(), idx = 0;
        vector<int> ans(size);

        for (int i = 0; i < size; i++) {
            if (nums[i] & 1) {
                ans[(idx * 2) + 1] = nums[i];
                idx++;
            }
        }

        idx = 0;

        for (int i = 0; i < size; i++) {
            if (!(nums[i] & 1)) {
                ans[idx * 2] = nums[i];
                idx++;
            }
        }

        return ans;
    }
};