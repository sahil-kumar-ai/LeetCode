class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> depth;
        depth.push(0);

        for (char ch : s) {
            if (ch == '(') depth.push(0);
            else {
                int val = depth.top();
                depth.pop();

                if(val == 0) {
                    val += 1;
                } else {
                    val = 2 * val;
                }

                depth.top() += val;
            }
        }

        return depth.top();
    }
};