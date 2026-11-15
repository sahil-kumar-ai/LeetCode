class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod = 1e9 + 7;
        int n = arr.size();

        long long odd = 0;
        long long pre = 0;

        for (int i = 0; i < n; i++) {
            pre += arr[i];

            if (pre % 2) odd++;
        }

        return (odd * (n - odd + 1)) % mod;
    }
};