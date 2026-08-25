class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int res = 0;

        for (string move : commands) {
            if (move == "DOWN") res += n;
            else if (move == "UP") res -= n;
            else if (move == "RIGHT") res += 1;
            else res -= 1;
        }

        return res;
    }
};