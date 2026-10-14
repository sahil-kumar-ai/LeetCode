class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";

        while (num > 0) {
            if (sum < 10) {
                s += to_string(sum);
                num--;
                sum -= sum;
            }

            else if (sum >= 10) {
                s += '9';
                num--;
                sum -= 9;
            }
        }

        if (sum != 0) return "";;

        return s;
    }
};