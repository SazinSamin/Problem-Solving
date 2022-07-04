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
    vector<int> tree;

void preOrder1(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    preOrder1(root->left);
    tree.push_back(root->val);
    preOrder1(root->right);
}


bool findTarget(TreeNode* root, int k) {
    preOrder1(root);
    int size = tree.size();
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if((tree[i] + tree[j]) == k) {
                return true;
            }
        }
    }
    return false;
}
};
