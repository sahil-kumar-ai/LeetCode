#[allow(dead_code)]
struct ProductOfNumbers {
    its: Vec<i32>,
}

impl ProductOfNumbers {
    #[allow(dead_code)]
    fn new() -> Self {
        Self { its: vec![1] }
    }

    #[allow(dead_code)]
    fn add(&mut self, num: i32) {
        if num == 0 {
            self.its = vec![1];
        } else {
            self.its.push(self.its.last().unwrap() * num);
        }
    }

    #[allow(dead_code)]
    fn get_product(&self, k: i32) -> i32 {
        if self.its.len() <= 1 || k as usize >= self.its.len() {
            0
        } else {
            self.its.last().unwrap() / self.its[self.its.len() - k as usize - 1]
        }
    }
}