class Solution {
public:
    bool isVowel(char elem) {
        if (elem == 'A' || elem == 'E' || elem == 'I' || elem == 'O' ||
                elem == 'U' || elem == 'a' || elem == 'e' || elem == 'i' ||
                elem == 'o' || elem == 'u') return true;
        return false;
    }
    string sortVowels(string s) {
        string t = "", vowels = "";

        for (char elem : s) {
            if (isVowel(elem)) vowels += elem;
        };

        if (vowels.size() == 0) return s;

        sort(vowels.begin(), vowels.end());
        int c = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                t += vowels[c];
                c++;
            } else
                t += s[i];
        };
        return t;
    }

    
}
;