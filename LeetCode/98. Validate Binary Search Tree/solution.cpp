class Solution {
public:
    
    bool isSubTreeLesser(TreeNode* root, int data){
        if(root == NULL){
            return true;
        }
        if(root->val < data && isSubTreeLesser(root->left, data)
           && isSubTreeLesser(root->right, data)){
            return true;
        }
        return false;
    }
    
    
    bool isSubTreeGreater(TreeNode* root, int data){
        if(root ==  NULL){
            return true;
        }
        if(root->val > data && isSubTreeGreater(root->left, data) 
            && isSubTreeGreater(root->right, data)){
            return true;
        }
        return false;
    }
    
    
    
    
    bool isValidBST(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        if(isSubTreeLesser(root->left, root->val) && isSubTreeGreater(root->right, root->val)
            && isValidBST(root->left) && isValidBST(root->right)){
                return true;
            }
           return false;
    }
};
