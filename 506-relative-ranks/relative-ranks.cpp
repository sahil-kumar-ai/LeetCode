class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sorted = score;

        sort(sorted.begin(), sorted.end(), greater<int>());

        unordered_map<int, int> hash;

        for (int i = 0; i < sorted.size(); i++) hash[sorted[i]] = i + 1;

        vector<string> arr;

        for (int i = 0; i < score.size(); i++)  {
            if (hash[score[i]] == 1) arr.push_back("Gold Medal");
            else if (hash[score[i]] == 2) arr.push_back("Silver Medal");
            else if (hash[score[i]] == 3) arr.push_back("Bronze Medal");
            else arr.push_back(to_string(hash[score[i]]));
        };

        return arr;
    }
};