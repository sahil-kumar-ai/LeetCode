class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice = 0, bob = 0, length = piles.size() - 1;

        for (int i = 0; i <= length; i++) {
            int max = length - i;
            if (i ^ 2 != 1) {
                if (piles[i] > piles[max]) {
                    alice += piles[i];
                    piles.erase(piles.begin() + i);
                } else {
                    alice += piles[max];
                    piles.erase(piles.begin() + max);
                }
            } else {
                if (piles[i] > piles[max]) {
                    bob += piles[i];
                    piles.erase(piles.begin() + i);
                } else {
                    bob += piles[max];
                    piles.erase(piles.begin() + max);
                }
            }
        }

        return alice > bob;
    }
};