class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = n, res = 0, sum = 0;

        while (num != 0) {
            long long temp = num % 10;

            if (temp != 0) {
                res = res * 10 + temp;
                sum += temp;
            }
            num /= 10;
        }

        long long temp1 = res;
        res = 0;

        while (temp1 != 0) {
            long long temp = temp1 % 10;

            if (temp != 0) res = res * 10 + temp;
            temp1 /= 10;
        }

        return res * sum;
    }
};