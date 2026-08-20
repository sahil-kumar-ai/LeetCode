class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 {nums[0]};
        vector<int> arr2 = {nums[1]};
        int idx = 2;

        while (idx < nums.size()) {
            if (arr1[arr1.size() - 1] > arr2[arr2.size() - 1]) arr1.push_back(nums[idx]);
            else arr2.push_back(nums[idx]);

            idx++;
        }

        for (int i = 0; i < arr2.size(); i++) arr1.push_back(arr2[i]);

        return arr1;
    }
};