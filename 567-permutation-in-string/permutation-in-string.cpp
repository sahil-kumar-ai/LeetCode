class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        sort(begin(s1), end(s1));
        
        for (int i = 0; i <= m - n; i++) {
            string sub = s2.substr(i, n);
            sort(begin(sub), end(sub));

            if (sub == s1) return true;
        }

        return false;
    }
};