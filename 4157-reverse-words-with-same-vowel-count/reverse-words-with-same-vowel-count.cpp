class Solution {
public:
    int countVowels(string st) {
        int c = 0;

        for (char ch : st) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') c++;
        }

        return c;
    }

    string reverseWords(string s) {
        vector<string> arr;
        string p = "";

        for (char ch : s) {
            if (ch == ' ') {
                arr.push_back(p);
                p = "";
            } else {
                p += ch;
            }
        }

        arr.push_back(p);

        int vowels = countVowels(arr[0]);
        string t = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            t += ' ';
            if (countVowels(arr[i]) == vowels) {
                reverse(arr[i].begin(), arr[i].end());
            }

            t += arr[i];
        }

        return t;
    }
};