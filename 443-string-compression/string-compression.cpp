class Solution {
public:
    int countDigit(int n) {
        int c = 0;

        while (n) {
            c++;
            n /= 10;
        }

        return c;
    }

    int compress(vector<char>& chars) {
        int ans = 0, count = 1;
        int index = 0;
        char ch = chars[0];

        for (int i = 1; i <= chars.size(); i++) {

            if (i < chars.size() && ch == chars[i]) {
                count++;
            }
            else {
                chars[index++] = ch;
                ans++;

                if (count > 1) {
                    string s = to_string(count);

                    for (char c : s) {
                        chars[index++] = c;
                        ans++;
                    }
                }

                if (i < chars.size()) {
                    ch = chars[i];
                    count = 1;
                }
            }
        }

        return ans;
    }
};