class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        arr1.push_back(nums[0]);
        vector<int> arr2;
        arr2.push_back(nums[1]);
        int count = 2;

        while (count < nums.size()) {
            if (arr1[arr1.size() - 1] > arr2[arr2.size() - 1]) arr1.push_back(nums[count]);
            else arr2.push_back(nums[count]);

            count++;
        }

        vector<int> res;

        for (int i = 0; i < arr1.size(); i++) res.push_back(arr1[i]);
        for (int i = 0; i < arr2.size(); i++) res.push_back(arr2[i]);

        return res;
    }
};