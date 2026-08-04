class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;

        if (nums.empty()) return res;

        sort(nums.begin(), nums.end());

        int expected = nums[0];
        int i = 0;

        while (expected <= nums.back()) {
            if (i < nums.size() && nums[i] == expected) {

                while (i < nums.size() && nums[i] == expected)
                    i++;
            } else {
                res.push_back(expected);
            }
            expected++;
        }

        return res;
    }
};