class Solution {
public:
    string truncateSentence(string s, int k) {
        string st = "", sub = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && k != 0) {
                k--;
                st += ' ';
            }
            else if (k == 0) break;
            else st += s[i];
        };

        if (st[st.size() - 1] == ' ')st.pop_back();

        return st;
    }
};