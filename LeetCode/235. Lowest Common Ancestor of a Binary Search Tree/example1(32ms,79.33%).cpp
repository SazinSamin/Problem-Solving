/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    set<TreeNode*> v1;
    set<TreeNode*> v2;

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        entryList(root, p, 1);
        entryList(root, q, 2);
        
        for(auto it = v1.begin(); it != v1.end(); it++) {
                cout << (*it)->val << " ";
        }
        cout << endl;
        for(auto it = v2.begin(); it != v2.end(); it++) {
            cout << (*it)->val << " ";
        }
        cout << endl;
        TreeNode* res;
        for(auto it = v1.begin(); it != v1.end(); it++) {
            if(v2.find((*it)) != v2.end()) {
                res = *it;
            }
        }
        return res;
    }


    void entryList(TreeNode* root, TreeNode* p, int flag) {
        if(root == NULL) return;
        if(flag == 1) {
            v1.insert(root);
        } else {
            v2.insert(root);
        }
        if(root->val == p->val) {
            return;
        }
        if(p->val < root->val) {
            entryList(root->left, p, flag);
        } else {
            entryList(root->right, p, flag);
        }
    }
};
