class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size(), ans = 0;
        vector<int> prefixSum(size, 0);

        prefixSum[0] = nums[0];

        for (int i = 1; i < size; i++) prefixSum[i] = prefixSum[i - 1] + nums[i];

        unordered_map<int, int> freq;
        freq[0] = 1;

        for (int i = 0; i < size; i++) {
            int val = prefixSum[i] - k;

            if (freq.contains(val)) ans += freq[val];
            freq[prefixSum[i]]++;
        }

        return ans;
    }
};