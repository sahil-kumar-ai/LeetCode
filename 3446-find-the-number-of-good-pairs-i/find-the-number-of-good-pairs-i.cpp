class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;

        for (int elem : nums1) {
            for (int num : nums2) {
                if (elem % (num * k) == 0) count++;
            }
        }

        return count;
    }
};