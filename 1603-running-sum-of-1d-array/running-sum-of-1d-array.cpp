class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> res;

        for (int elem : nums) {
            sum += elem;
            res.push_back(sum);
        }

        return res;
    }
};