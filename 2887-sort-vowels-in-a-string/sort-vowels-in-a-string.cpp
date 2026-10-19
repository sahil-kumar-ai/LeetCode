class Solution {
public:
    string sortVowels(string s) {
        string t = "", vowels = "";

        for (char elem : s) {
            if (elem == 'A' || elem == 'E' || elem == 'I' || elem == 'O' ||
                elem == 'U' || elem == 'a' || elem == 'e' || elem == 'i' ||
                elem == 'o' || elem == 'u')
                vowels += elem;
        };

        if (vowels.size() == 0)
            return s;

        sort(vowels.begin(), vowels.end());
        int c = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                t += vowels[c];
                c++;
            } else
                t += s[i];
        };
        return t;
    }

    
}
;