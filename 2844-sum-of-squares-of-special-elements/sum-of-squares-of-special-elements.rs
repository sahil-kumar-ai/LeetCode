impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let mut sum: i32 = 0;

        for i in 1..=nums.len() {
            if nums.len() % i == 0 {
                sum += nums[i - 1] * nums[i - 1];
            }
        }

        sum
    }
}