class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      
        int size = mat.size();
        int internalSize = mat[0].size();

        if(r * c != size * internalSize) {
                return mat;
        }

        vector<vector<int>> res(r, vector<int>(c));
        int row = 0, col = 0;
        for(int i=0; i < size; i++) {
                for(int j=0; j < internalSize; j++) {
                        res[row][col++] = mat[i][j];
                        if(col == c) {
                                row++; 
                                col = 0;
                        }
                }
        }

        return res;
    }
};
