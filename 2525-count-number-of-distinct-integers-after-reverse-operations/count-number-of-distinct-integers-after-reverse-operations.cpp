class Solution {
public:
    int reverseDig(int num, map<int, int>& hash) {
        int ans = 0;
        hash[num]++;

        while (num) {
            ans = ans * 10 + (num % 10);
            num /= 10;
        };

        hash[ans]++;

        return ans;
    };

    int countDistinctIntegers(vector<int>& nums) {
        map<int, int> hash;
        int c = 0;

        for (int elem : nums) reverseDig(elem, hash);

        for (auto it : hash) c++;

        return c;
    }
};