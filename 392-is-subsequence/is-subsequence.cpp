class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> stk;

        for (int i = 0; i < s.size(); i++)  stk.push(s[i]);

        for (int i = (int)t.size() - 1; i >= 0 && !stk.empty(); i--) {
            if (stk.top() == t[i]) stk.pop();
        }

        return stk.empty();
    }
};