impl Solution {
    pub fn trim_trailing_vowels(s: String) -> String {
        let mut ans: String = s;

        while let Some(ch) = ans.chars().last() {
            if "aeiou".contains(ch) {
                ans.pop();
            } else {
                break;
            }
        }

        return ans;
    }
}