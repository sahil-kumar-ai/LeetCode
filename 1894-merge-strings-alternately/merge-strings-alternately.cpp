class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.size(), b = word2.size(), size = a > b ? a : b;
        string s = "";

        for (int i = 0; i < size; i++) {
            if (i >= a) s+= word2[i];
            else if (i >= b) s += word1[i];
            else {
                s += word1[i];
                s += word2[i];
            }
        };

        return s;
    }
};