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

// this global variable exits after a function call & when preorderTraversal call again, the last
// array values still present in arr, so they combine & result error.
const arr = [];
var preorderTraversal = function(root) {
    if(root == null) {
        return [];
    };
    arr.push(root.val);
    preorderTraversal(root.left);
    preorderTraversal(root.right);
    return arr;
};

