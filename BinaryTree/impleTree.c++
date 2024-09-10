#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& nums, int i) {
    if (i >= nums.size()) {
        return NULL;
    }
    TreeNode* root = new TreeNode(nums[i]);
    root->left = buildTree(nums, 2 * i + 1);
    root->right = buildTree(nums, 2 * i + 2);
    return root;
}

void printTree(TreeNode* root) {
    if (!root) {
        return;
    }
   
    printTree(root->left);
     cout << root->val << " ";
    printTree(root->right);
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    TreeNode* root = buildTree(arr, 0);
    printTree(root);
    return 0;
}
