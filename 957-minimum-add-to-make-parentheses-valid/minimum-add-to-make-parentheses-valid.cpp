class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;

        for (char ch : s) {
            if (ch == '(') stk.push(ch);
            else {
                if (stk.empty()) stk.push(ch);
                else if (stk.top() == '(') stk.pop();
                else stk.push(ch);
            }
        }

        return stk.size();
    }
};