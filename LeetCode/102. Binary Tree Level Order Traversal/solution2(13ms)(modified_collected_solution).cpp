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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res1;
        vector<int> res2;
        queue<TreeNode*> q;
        int count = 0;
        if(root == NULL) {return {};}
        else { q.push(root); }

        while(!q.empty()) {
                count = q.size();
                for(int i = 0; i < count; i++) {
                        TreeNode* temp = q.front();
                        q.pop();
                        res2.push_back(temp->val);
                        if(temp->left != NULL) q.push(temp->left);
                        if(temp->right != NULL) q.push(temp->right);
                }
                res1.push_back(res2);
                res2.clear();
        }
        return res1;
    }
};
