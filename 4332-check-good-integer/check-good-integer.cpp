class Solution {
public:
    bool checkGoodInteger(int n) {
        int digSum = 0, squareSum = 0;

        while (n != 0) {
            int dig = n % 10;
            digSum += dig;
            squareSum += dig * dig;
            n /= 10;
        }

        return (squareSum - digSum) >= 50;
    }
};