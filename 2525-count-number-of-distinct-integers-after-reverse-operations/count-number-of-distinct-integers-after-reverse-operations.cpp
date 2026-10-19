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
        unordered_set<int> st;
        st.reserve(nums.size() * 2);

        for (int elem : nums) {
            st.insert(elem);
            st.insert(reverseDig(elem));
        }

        return st.size();
    }
};