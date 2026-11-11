impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let mut ans = 0;
        let n = nums.len();
        for i in 1..n+1{
            if n%i==0{
                ans=ans+nums[i-1]*nums[i-1];
            }
        }
        ans
    }
}