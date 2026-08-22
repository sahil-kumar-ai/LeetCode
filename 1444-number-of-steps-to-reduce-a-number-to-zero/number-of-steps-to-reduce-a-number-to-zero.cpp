class Solution {
public:
    int numberOfSteps(int num) {
        int res = 0;

        while (num != 0) {
            if (!(num & 1)) {
                num /= 2;
                res++;
            } else {
                num -= 1;
                res++;
            }
        }

        return res;
    }
};