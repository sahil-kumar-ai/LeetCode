class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int> hash;

        for (int i = 0; i < responses.size(); i++) {
            set<string> s;
            for (int j = 0; j < responses[i].size(); j++) {
                if(!s.contains(responses[i][j])) {
                    ++hash[responses[i][j]];
                }
                s.insert(responses[i][j]);
            };
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