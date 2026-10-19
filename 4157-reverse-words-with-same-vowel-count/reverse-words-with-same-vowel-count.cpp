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

        arr.push_back(p); // Your original code missed the last word

        int vowels = countVowels(arr[0]);
        string t = "";

        for (int i = 0; i < arr.size(); i++) {
            if (i > 0 && countVowels(arr[i]) == vowels) {
                reverse(arr[i].begin(), arr[i].end());
            }

            if (i > 0) t += " ";
            t += arr[i];
        }

        return t;
    }
};