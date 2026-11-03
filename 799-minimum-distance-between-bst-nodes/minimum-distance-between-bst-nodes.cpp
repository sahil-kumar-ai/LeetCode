class Solution {
public:
    int ans = INT_MAX;
    int prev = -1;

    int minDiffInBST(TreeNode* root) {
        bstDiff(root);
        return ans;
    }

    void bstDiff(TreeNode* root) {
        if (root == NULL) return;

        bstDiff(root->left);

        if (prev != -1)
            ans = min(ans, root->val - prev);

        prev = root->val;

        bstDiff(root->right);
    }
};