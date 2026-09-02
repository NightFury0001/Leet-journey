int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);
    int max;

    if (lh >= rh)
        max = lh;
    else
        max = rh;

    return max + 1;
}