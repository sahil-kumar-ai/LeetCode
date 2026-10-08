class Solution {
public:
    string removeOuterParentheses(string s) {
        string st = "";
        int count = 0;

        for (char ch : s) {
            if (ch == '(' && count > 0) {
                st += ch;
                count++;
            } else {
                if (ch == '(') count++;
                else if (ch == ')' && count == 1) count--;
                else {
                    st += ch;
                    count--;
                };
            }
        }

        return st;
    }
};