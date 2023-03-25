// as in brute force approch if we want to go for in place solution the we have to make a 0's corresponding row & column also 0
// which then leads to entire matrix zero
// so we have to copy the given matrix and then manipulate the copied matrix to prevent the original matrix shape get wasted



class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        // copy the given matrix to another matrix
        int copy[matrix.size()][matrix[0].size()];
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                copy[i][j] = matrix[i][j];
            }
        }
        
        // traverse the matrix & find out the zero
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                // if 0 is found
                if(matrix[i][j] == 0) {
                    int x = 0, y = 0;
                    // make the entire row zero
                    while(x < matrix[i].size()) {
                        copy[i][x++] = 0;
                    }
                    // make the entire column zero
                    while(y < matrix.size()) {
                        copy[y++][j] = 0;
                    }
                }
            }
        }
        // as the return is void, so copy the manipulated matrix to the original matrix
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[i].size(); j++) {
                matrix[i][j] = copy[i][j];
            }
        }
    }
};
