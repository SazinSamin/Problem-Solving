/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
    const size = mat.length;
        const internalSize = mat[0].length;

        if(size * internalSize != r * c) {
                return mat;
        }

        const res = [];
        let innerres = [];
        for(let i =0; i<r; i++) {
                for(let j = 0; j < c; j++) {
                        innerres.push(-1);
                }
                res.push(innerres);
                innerres = [];
        }


        let row = 0, col = 0;   
        for(let i = 0; i < size; i++) {
                for(let j =0 ; j < internalSize; j++) {

                        res[row][col++] = mat[i][j];
                        if(col == c) {
                                col = 0;
                                row++;
                        }
                }
        }
        return res;
};
