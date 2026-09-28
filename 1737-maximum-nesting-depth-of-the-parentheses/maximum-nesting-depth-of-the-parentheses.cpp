class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, braces = 0;

        for (char ch : s) {
            if (ch == '(') braces++;
            else if (ch == ')') braces--;

            if (braces >= ans) ans = braces;
        }

        return ans;
    }
};