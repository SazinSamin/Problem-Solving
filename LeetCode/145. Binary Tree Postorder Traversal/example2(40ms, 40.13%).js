/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var postorderTraversal = function(root) {
    const stack = [];
    function traverse(root) {
        if(root == null) return [];
        if(root.left != null) traverse(root.left);
        if(root.right != null) traverse(root.right);
        stack.push(root.val);
        return stack;
    }
    return traverse(root);
};
