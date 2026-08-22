class Solution {
public:
    int sumOfMultiples(int n) {
        int res = 0;

        for (int elem = 1; elem < n + 1; elem++) {
            if ((elem % 3 == 0) || (elem % 5 == 0) || (elem % 7 == 0)) res += elem;
        }

        return res;
    }
};