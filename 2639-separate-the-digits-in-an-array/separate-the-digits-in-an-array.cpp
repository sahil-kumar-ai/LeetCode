class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        vector<int> arr = nums;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> dig;

            while (arr[i] != 0) {
                dig.push_back(arr[i] % 10);
                arr[i] /= 10;
            }

            for (int j = dig.size() - 1; j >= 0; j--) res.push_back(dig[j]);
        }

        return res;
    }
};