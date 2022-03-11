/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    const outerLen = matrix.length;
    const innerLen = matrix[0].length;
    let start = 0, end = (innerLen * outerLen) - 1;
    let mid, row, col, pivot;
    
    while(start <= end) {
        mid = Math.floor((start + end) / 2);
        row = Math.floor(mid / innerLen);
        col = mid % innerLen;

        pivot = matrix[row][col];


        if(pivot == target) return true;
        if(target < pivot) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return false;
};
