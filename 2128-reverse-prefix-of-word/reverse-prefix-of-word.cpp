class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> stk;
        bool found = false;

        for (char chr : word) {
            if (chr != ch) stk.push(chr);
            else if (chr == ch) {
                stk.push(chr);
                found = true;
                break;
            }
        }

        if (!found) return word;

        string s = "";
        int c = 0;

        while (!(stk.empty())) {
            s += stk.top();
            stk.pop();
            c++;
        };

        for (int i = 0; i < word.size(); i++) {
            if (i >= c) s += word[i];
        }

        return s;
    }
};