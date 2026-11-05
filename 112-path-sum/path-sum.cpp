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
    int sum = 0;
    bool ans = false;

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        hasPath(root, targetSum);

        return ans;
    }

    void hasPath(TreeNode* root, int target) {
        if (root == NULL) return;
        sum += root -> val;

        if (!(root -> left) && !(root -> right)) {
            if (sum == target) ans = true;

            sum -= root -> val;
            return;
        }

        hasPath(root -> left, target);
        hasPath(root -> right, target);

        sum -= root -> val;
    }
};