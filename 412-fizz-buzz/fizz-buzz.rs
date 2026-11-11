impl Solution {
    pub fn fizz_buzz(n: i32) -> Vec<String> {
        let mut arr : Vec<String> =Vec::new();

        for i in 1..=n {
            arr.push(
                if i % 15 == 0 {"FizzBuzz".to_string()}
                else if i % 5 == 0 {"Buzz".to_string()}
                else if i % 3 == 0 {"Fizz".to_string()}
                else {i.to_string()}
            );
        }

        return arr;
    }
}