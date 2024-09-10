void printTree(TreeNode* root) {
    if (!root) {
        return;
    }
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}