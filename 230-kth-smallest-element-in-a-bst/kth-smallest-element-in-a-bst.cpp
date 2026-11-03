/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans = root -> val, count = 0;

        findBst(ans, count, root, k);

        return ans;
    }

    void findBst(int& ans, int& count, TreeNode* root, int k) {
        if (root == nullptr || count >= k) return;

        findBst(ans, count, root -> left, k);

        count++;
        if (count == k) {
            ans = root -> val;
            return;
        }

        findBst(ans, count, root -> right, k);
    }
};