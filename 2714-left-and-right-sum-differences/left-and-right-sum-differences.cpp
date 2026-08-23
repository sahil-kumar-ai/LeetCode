class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size(), sum = 0;

        if (size == 1) return {0};

        vector<int> arr1;

        for (int i = 0; i < size; i++) {
            arr1.push_back(sum);
            sum += nums[i];
        }

        sum = 0;

        for (int i = size - 1; i >= 0; i--) {
            arr1[i] = abs(arr1[i] - sum);
            sum += nums[i];
        }

        return arr1;
    }
};