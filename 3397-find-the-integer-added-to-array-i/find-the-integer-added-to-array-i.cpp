class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int mina = INT_MAX, minb = INT_MAX;

        for (int i = 0; i < nums1.size(); i++) {
            mina = min(mina, nums1[i]);
            minb = min(minb, nums2[i]);
        };

        return (mina - minb) * -1;
    }
};