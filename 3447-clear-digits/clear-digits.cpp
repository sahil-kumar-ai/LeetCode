class Solution {
public:
    string clearDigits(string s) {
        string stk;

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i]) && !stk.empty()) stk.pop_back();
            else stk += s[i];
        }

        return stk;
    }
};