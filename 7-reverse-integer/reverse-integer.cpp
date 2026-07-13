class Solution {
public:
    int reverse(int x) {
        long long val = 0;
        bool neg = x < 0;
        long long n = abs((long long)x);

        while (n > 0) {
            val = val * 10 + n % 10;
            n /= 10;
        }
        val = neg ? -val : val;

        if (val > INT_MAX || val < INT_MIN) return 0;
        return (int)val;
    }
};