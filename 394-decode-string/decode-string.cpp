class Solution {
public:
    string decodeString(string s) {
        stack<pair<int, string>> stk;
        string curr = "";
        int num = 0;

        for(char x : s) {
            if(isdigit(x))
                num = num * 10 + (x - '0');

            else if(x == '[') {
                stk.push({num, curr});
                num = 0;
                curr = "";
            }
            else if(x == ']') {
                auto [k, prev] = stk.top();
                stk.pop();

                string temp = "";
                for(int i = 0; i < k; i++)
                    temp += curr;

                curr = prev + temp;
            }
            else curr += x;
        }

        return curr;
    }
};