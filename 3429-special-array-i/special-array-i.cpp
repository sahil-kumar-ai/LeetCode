class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        string diff = nums[0] & 1 ? "Odd" : "Even";

        for (int i = 1; i < nums.size(); i++) {
            if ((nums[i] & 1 ? "Odd" : "Even") == diff) return false;

            diff = nums[i] & 1 ? "Odd" : "Even";
        }
        
        return true;
    }
};