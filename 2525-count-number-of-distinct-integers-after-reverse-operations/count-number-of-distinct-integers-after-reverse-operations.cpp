class Solution {
public:
    int reverseDig(int num) {
        int ans = 0;

        while (num) {
            ans = ans * 10 + (num % 10);
            num /= 10;
        };

        return ans;
    };

    int countDistinctIntegers(vector<int>& nums) {
        vector<int> dum = nums;
        map<int, int> hash;
        int c = 0;

        for (int elem : dum) nums.push_back(reverseDig(elem));

        for (int elem : nums) {
            if (!hash[elem]) c++;
            hash[elem]++;
        };

        return c;
    }
};