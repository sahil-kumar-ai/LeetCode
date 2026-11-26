class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, size = nums.size();
        vector<int> prefixSum(size, 0);
        prefixSum[0] = nums[0];

        for (int i = 1; i < size; i++) prefixSum[i] = prefixSum[i - 1] + nums[i];

        unordered_map<int, int> freq;
        freq[0] = 1;

        for (int i = 0; i < size; i++) {
            int fre = prefixSum[i] - k;

            if (freq.contains(fre)) ans += freq[fre];
            freq[prefixSum[i]]++;
        }

        return ans;
    }
};