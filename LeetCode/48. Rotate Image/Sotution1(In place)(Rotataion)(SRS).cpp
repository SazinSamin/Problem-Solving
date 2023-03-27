class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix.size() == 1) return;
        if(matrix[0].size() == 0 || matrix[0].size() == 1) return;
        int pocket1, pocket2, pocket3;
        int lastIdx = matrix.size() - 1;
        int max = matrix.size();
        

        for(int i = 0; i < matrix.size(); i++) {
                for(int j = i; j < matrix.size() - (i+1); j++) {

                        pocket1 = matrix[j][lastIdx - i];
                        matrix[j][lastIdx - i] = matrix[i][j];
                        
                        pocket2 = matrix[lastIdx - i][lastIdx -j];
                        matrix[lastIdx - i][lastIdx -j] = pocket1;

                        pocket3 = matrix[lastIdx - j][i];
                        matrix[lastIdx - j][i] = pocket2;

                        matrix[i][j] = pocket3;

                }
        }
    }
};
