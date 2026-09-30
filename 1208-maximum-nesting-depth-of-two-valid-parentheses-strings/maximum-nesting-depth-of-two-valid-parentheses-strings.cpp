class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count = 0;

        vector<int> res;

        for (char ch : seq) {
            if (ch == '(') {
                count++;
                res.push_back(count % 2);
            } else {
                res.push_back(count % 2);
                count--;
            }
        }
        return res;
    }
};