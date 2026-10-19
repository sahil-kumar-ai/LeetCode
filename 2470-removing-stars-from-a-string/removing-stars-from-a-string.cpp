class Solution {
public:
    string removeStars(string s) {
        string t;

        for (char ch : s) {
            if (ch == '*') t.pop_back();
            else t += ch;
        };

        return t;
    }
};