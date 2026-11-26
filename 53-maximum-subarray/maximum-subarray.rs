impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let mut ans : i32 = i32::MIN;
        let mut curr_sum : i32 = 0;

        for i in nums {
            curr_sum += i;
            ans = ans.max(curr_sum);

            if curr_sum < 0 {
                curr_sum = 0;
            }
        }

        ans
    }
}