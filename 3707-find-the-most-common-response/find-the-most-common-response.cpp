class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        set<string> s;
        map<string, int> hash;

        for (int i = 0; i < responses.size(); i++) {
            s.clear();
            for (int j = 0; j < responses[i].size(); j++) {
                s.insert(responses[i][j]);
            };

            for (string st : s) hash[st]++;
        };

        int m = INT_MIN;
        string ans = "";

        for (auto it : hash) {
            if (it.second > m) {
                m = it.second;
                ans = it.first;
            };
        };

        return ans;
    }
};