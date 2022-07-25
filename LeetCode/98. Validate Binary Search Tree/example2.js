function isBianryTreeLesser(root, val) {
        if(root == null) return true;
        if(root.val < val && isBianryTreeLesser(root.left, val) && isBianryTreeLesser(root.right, val)) {
                return true;
        }
        return false;
}




function isBianryTreeGreater(root, val) {
        if(root == null) return true;
        if(root.val > val && isBianryTreeGreater(root.left, val) && isBianryTreeGreater(root.right, val)) {
                return true;
        }
        return false;
}



var isValidBST = function(root) {
    if(root == null) return true;
    if(isBianryTreeLesser(root.left, root.val) && isBianryTreeGreater(root.right, root.val)
        && isValidBST(root.left) && isValidBST(root.right)) {
                return true;
        }
    return false;
};
