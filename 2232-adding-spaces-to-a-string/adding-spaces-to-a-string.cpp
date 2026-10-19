class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string t = "";
        int c = 0;

        for (int i = 0; i < s.size(); i++) {
            if (c != spaces.size() && i == spaces[c]) {
                t += " ";
                t += s[i];
                c++;
            } else t += s[i];
        }
        return t;
    }
};