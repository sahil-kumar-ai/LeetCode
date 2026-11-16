impl Solution {
    pub fn digit_sum(s: String, k: i32) -> String {
        let mut st : String = String::from(s.clone());
        let mut ans : String = String::new();

        loop {
            if s.len() <= k.try_into().unwrap() {
                return s;
            }

            let mut sum : i32 = 0;
            let mut count : i32 = 0;
            for i in 0..st.len() {
                sum += (st.as_bytes()[i] - b'0') as i32;
                count += 1;

                if count == k || i == st.len() - 1 {
                    ans += &sum.to_string();
                    sum = 0;
                    count = 0;
                }
            }

            if ans.len() > k.try_into().unwrap() {
                st = ans;
                ans = String::new();
            } else if ans.len() <= k.try_into().unwrap() {
                break;
            }
        }

        return ans;
    }
}