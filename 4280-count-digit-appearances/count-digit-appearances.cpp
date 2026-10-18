class Solution {
public:
    int digSum(int num, int match) {
        int c = 0;

        while (num) {
            if (match == num % 10) c++;
            num /= 10;
        };

        return c;
    }

    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;

        for (int elem : nums) count += digSum(elem, digit);

        return count;
    }
};