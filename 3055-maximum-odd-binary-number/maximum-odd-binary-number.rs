impl Solution {
    pub fn maximum_odd_binary_number(s: String) -> String {
        let mut st : String = String::new();
        let length : usize = s.len();
        let mut count : i32 = 0;

        for i in s.chars() {
            if (i == '1') {count += 1;}
        }

        for _ in 0..length - 1 {
            if count > 1 {
                st.push('1');
                count -= 1;
            } else {
                st.push('0');
            }
        }

        st.push('1');

        st
    }
}