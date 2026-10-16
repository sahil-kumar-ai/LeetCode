class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m = INT_MIN;

        for (int i = 0; i < sentences.size(); i++) {
            int ans = 1;
            for (int j = 0; j < sentences[i].size(); j++) if (sentences[i][j] == ' ') ans += 1;

            m = max(m, ans);
        }

        return m;
    }
};