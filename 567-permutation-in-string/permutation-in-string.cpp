class Solution {
public:
    bool isSameFreq (int freq1[], int freq2[]) {

        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.size(); i++) freq[s1[i] - 'a']++;

        int windSize = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            int winIdx = 0, idx = i;
            int freq2[26] = {0};

            while (winIdx < windSize && idx < s2.size()) {
                freq2[s2[idx] - 'a']++;
                winIdx++; idx++;
            }

            if (isSameFreq(freq, freq2)) return true;
        }

        return false;
    }
};