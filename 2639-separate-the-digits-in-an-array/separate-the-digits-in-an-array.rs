impl Solution {
    pub fn separate_digits(nums: Vec<i32>) -> Vec<i32> {
        let mut arr : Vec<i32> = Vec::new();

        for mut num in nums {
            let mut temp : Vec<i32> = Vec::new();
            while num > 0 {
                temp.push(num % 10);
                num /= 10;
            }

            for i in (0..temp.len()).rev() {
                arr.push(temp[i]);
            }
        }

        return arr;
    }
}