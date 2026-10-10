class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)(k1 + k2);

        vector<long long> v(n);
        long long sum = 0;
        long long mx = 0;

        for(int i = 0; i < n; i++){
            v[i] = abs(nums1[i] - nums2[i]);
            sum += v[i];
            mx = max(mx, v[i]);
        }

        if(sum <= k) return 0;

        vector<long long> cnt(mx + 1, 0);

        for(auto x : v) cnt[x]++;

        for(long long i = mx; i > 0 && k > 0; i--){
            long long need = cnt[i];

            if(need == 0) continue;

            long long take = min(k, need);
            cnt[i] -= take;
            cnt[i - 1] += take;
            k -= take;
        }

        long long res = 0;

        for(long long i = 0; i < cnt.size(); i++) res += cnt[i] * i * i;

        return res;
    }
};