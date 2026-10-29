class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        string diff = nums[0] & 1 ? "Odd" : "Even";

        for (int i = 1; i < nums.size(); i++) {
            string is = nums[i] & 1 ? "Odd" : "Even";

            if (is == diff) return false;

            diff = is;
        }
        
        return true;
    }
};