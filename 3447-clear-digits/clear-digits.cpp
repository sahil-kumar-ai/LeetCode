class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i]) && !stk.empty()) {
                stk.pop();
                continue;
            }

            stk.push(s[i]);
        }

        string st = "";

        while (!stk.empty()) {
            st += stk.top();
            stk.pop();
        }

        reverse(st.begin(), st.end());

        return st;
    }
};