class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp = 0, tp = 0;

        while (tp < t.size() && sp < s.size()) {
            if (t[tp] == s[sp]) {
                sp++;
                tp++;
            } else tp++;
        }

        return sp == s.size() ? true : false;
    }
};