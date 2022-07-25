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
    
   
    
    int Height(TreeNode* head){
        if(head == NULL){
                return 0;
        }
        return 1 + max(Height(head->right), Height(head->left));
    }


    vector<int> printOrder(TreeNode* head, int level, vector<int>& internal) {
    
        if(head == NULL) return {};
        if(level == 1) {
                internal.push_back(head->val);
        };
        if(level > 1) {
                printOrder(head->left, level - 1, internal);
                printOrder(head->right, level - 1, internal);
        }
            return internal;
        }

    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h = Height(root);
        vector<vector<int>> external;
        vector<int> internal;
        for(int i = 1; i <= h; i++) {
                external.push_back(printOrder(root, i, internal));
                internal.clear();
        }
        
        return external;
    }
};
