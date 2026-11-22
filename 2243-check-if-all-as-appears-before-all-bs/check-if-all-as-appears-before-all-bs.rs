impl Solution {
    pub fn check_string(s: String) -> bool {
        let mut is_b : bool = false;

        for ch in s.chars() {
            if ch == 'b' {
                is_b = true;
            } else if is_b {
                return false;
            }
        }
        true
    }
}