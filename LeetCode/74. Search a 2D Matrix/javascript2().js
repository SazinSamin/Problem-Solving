/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    let outerLen = matrix.length;
        let innerLen = matrix[0].length;
        let targetArr = -1;

        for(let i = 0; i < outerLen; i++) {
                if(target >= matrix[i][0] && target <= matrix[i][innerLen - 1]) {
                        targetArr = i;
                }
        }

        if(targetArr == - 1) {
                return false;
        } else {
                for(let i = 0; i < innerLen; i++) {
                        if(target == matrix[targetArr][i]) {
                                return true;
                        }
                }
        }


        return false;
};
