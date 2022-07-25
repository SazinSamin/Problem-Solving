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
 * @return {number}
 */

function max(root) {
    if(root == null) return 0;
    return 1 + Math.max(max(root.left), max(root.right));
}

var maxDepth = function(root) {
    return max(root);
};
