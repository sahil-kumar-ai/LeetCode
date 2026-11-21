impl Solution {
    pub fn find_subtree_sizes(parent: Vec<i32>, s: String) -> Vec<i32> {
        let s = s.as_bytes();
        let n = parent.len();

        let mut start = vec![0_usize; n + 1];
        parent[1..]
            .iter()
            .map(|&p| p as usize)
            .for_each(|p| start[p] += 1);
        (0..n).for_each(|idx| start[idx + 1] += start[idx]);

        let mut children = vec![0_u32; n - 1];
        parent.iter().enumerate().skip(1).for_each(|(idx, &p)| {
            let p = p as usize;
            start[p] -= 1;
            children[start[p]] = idx as u32;
        });

        let mut last_seen: Vec<[i32; 26]> = vec![[-1; 26]; n];
        last_seen[0][to_idx(s[0])] = 0;
        let mut bfs_order: Vec<u32> = Vec::with_capacity(n);
        bfs_order.push(0);
        let mut current_idx = 0;
        while current_idx < bfs_order.len() {
            let p = bfs_order[current_idx] as usize;
            current_idx += 1;
            children[start[p]..start[p + 1]].iter().for_each(|&child| {
                let child = child as usize;
                last_seen[child] = last_seen[p];
                last_seen[child][to_idx(s[child])] = child as i32;
                bfs_order.push(child as u32);
            });
        }

        let mut answer = vec![1_i32; n];
        bfs_order[1..].iter().rev().for_each(|&child| {
            let child = child as usize;
            let parent = parent[child] as usize;
            let new_parent = last_seen[parent][to_idx(s[child])];
            if new_parent >= 0 {
                answer[new_parent as usize] += answer[child];
            } else {
                answer[parent] += answer[child];
            }
        });

        answer
    }
}

fn to_idx(c: u8) -> usize {
    (c - b'a') as usize
}