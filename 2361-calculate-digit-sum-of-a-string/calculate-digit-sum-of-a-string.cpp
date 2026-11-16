class Solution {
public:
    string digitSum(string s, int k) {
        string st = s;
        string ans = "";

        while (true) {
            if (st.size() <= k) return st;
            int in = 0, count = 0;

            for (int i = 0; i < st.size(); i++) {
                in += st[i] - '0';
                count++;
                if (count == k || i == st.size() - 1) {
                    ans += to_string(in);
                    count = 0;
                    in = 0;
                }
            }

            if (ans.size() <= k) {
                break;
            } else {
                st = ans;
                ans = "";
            }
        }
        return ans;
    }
};