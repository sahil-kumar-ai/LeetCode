impl Solution {
    pub fn can_alice_win(n: i32) -> bool {
        let mut stones = n;
        let mut remove = 10;
        let mut alice = true;

        while stones >= remove {
            stones -= remove;
            remove -= 1;
            alice = !alice;
        }

        !alice
    }
}