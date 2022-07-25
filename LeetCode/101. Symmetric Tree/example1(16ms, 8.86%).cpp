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
    bool testSymmetry(TreeNode* roo1, TreeNode* root2) {
            if(roo1 == NULL && root2 == NULL) {
                    return true;
            }

            if(roo1 && root2 && roo1->val == root2->val) {
                    return testSymmetry(roo1->left, root2->right) && 
                                testSymmetry(roo1->right, root2->left);
            }
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
                return true;
        }
        return testSymmetry(root, root);
    }
};
