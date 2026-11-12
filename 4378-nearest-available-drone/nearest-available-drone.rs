impl Solution {
    pub fn nearest_drone(drones: Vec<Vec<i32>>, target: Vec<i32>) -> i32 {
        let mut ans: i32 = -1;
        let mut reach: i32 = i32::MAX;

        for i in 0..drones.len() {
            let calc: i32 = (drones[i][0] - target[0]).abs() + (drones[i][1] - target[1]).abs();

            if calc <= drones[i][2] && reach > calc {
                ans = i as i32;
                reach = calc;
            }
        }

        return ans;
    }
}