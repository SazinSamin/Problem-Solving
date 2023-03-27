class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;
        for(int i = 0; i < matrix.size(); i++) {
                for(int j = 0; j < i; j++) {
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = temp;
                }
        }

        int i = 0, j = matrix.size() - 1;
        while(i < j) {
                for(int k = 0; k < matrix.size(); k++) {
                        temp =  matrix[k][i];
                        matrix[k][i] = matrix[k][j];
                        matrix[k][j] = temp;
                }       
                i++; j--;
        }
    }
};
