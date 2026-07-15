class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even = 0;

        for (int i = 1; i <= n; i++)  {
            even +=  2 * i;
        }

        return gcd(even - n, even);
    }

    int gcd(int odd, int even) {
        int high = (odd > even ? odd : even) / 2;
        int great = 0;

        for (int i = 1; i < high + 1; i++) {
            if ((odd % i == 0 && even % i == 0) && (i > great)) {
                great = i;
            }
        }

        return great;
    }
};