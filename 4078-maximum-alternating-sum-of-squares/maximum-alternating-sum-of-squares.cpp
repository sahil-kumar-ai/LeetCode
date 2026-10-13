class Solution {
public:

    using ll = long long;

    long long maxAlternatingSum(vector<int>& nums) {
        map<ll, ll> hash;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) hash[abs(nums[i])]++;
            else hash[nums[i]]++;
        };

        ll ans = 0;
        ll count = 0;
        ll sum = 0;

        while (hash.size() != 0) {
            if (count & 1) {
                sum -= hash.begin()->first * hash.begin()->first;
                if (hash.begin()->second != 1) hash.begin()->second--;
                else if (hash.begin()->second == 1) hash.erase(hash.begin());
                count++;
            } else {
                sum += prev(hash.end())->first * prev(hash.end())->first;
                if (prev(hash.end())->second != 1) prev(hash.end())->second--;
                else if (prev(hash.end())->second == 1) hash.erase(prev(hash.end()));
                count++;
            }
        }

        return sum;
    }
};