class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> hash;
        int res = 0;

        for (int dig : nums) {
            hash[dig]++;

            if (hash[dig] <= 2) {
                nums[res] = dig;
                res++;
            }
        }

        return res;
    }
};