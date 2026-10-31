class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> hash;
        int ans = -1;

        for (int elem : nums1) hash[elem]++;

        for (int i = 0; i < nums2.size(); i++) {
            if (hash[nums2[i]]) {
                ans = nums2[i];
                break;
            }
        }

        return ans;
    }
};