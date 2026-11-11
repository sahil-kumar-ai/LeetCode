impl Solution {
    pub fn running_sum(nums: Vec<i32>) -> Vec<i32> {
        let mut arr : Vec<i32> = Vec::new();
        let mut sum : i32 = 0;

        for i in 0..nums.len() {
            sum += nums[i as usize];
            arr.push(sum);
        }

        return arr;
    }
}