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
 * @return {number[][]}
 */
var levelOrder = function(root) {
        if (root == null) return [];
        const res2 = [];
        let res1 = [];
        const queue = [];
        let count = 0;
        let temp;
        queue.push(root);
        while(queue.length != 0) {
                count = queue.length;
                for(let i = 0; i < count; i++) {
                        temp = queue.shift();
                        res1.push(temp.val);
                        if(temp.left != null) queue.push(temp.left);
                        if(temp.right != null) queue.push(temp.right);
                }
                res2.push(res1);
                res1 = [];
        }
        return res2;
};
