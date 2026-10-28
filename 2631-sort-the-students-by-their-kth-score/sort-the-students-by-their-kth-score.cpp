class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < score.size(); i++) arr.push_back({score[i][k], i});

        sort(arr.begin(), arr.end(), greater<pair<int, int>>());

        vector<vector<int>> ans;

        for (int i = 0; i < arr.size(); i++) ans.push_back(score[arr[i].second]);

        return ans;
    }
};