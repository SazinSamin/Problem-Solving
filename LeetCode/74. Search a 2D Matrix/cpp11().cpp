class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
        for(vector<vector<int>>::iterator ito = matrix.begin(); ito != matrix.end(); ito++) {
                vector<int> outVec = (*ito);
                if(target >= *(outVec.begin()) && target <= *((outVec).end() -1)) {
                        for(vector<int>::iterator it = outVec.begin(); it != outVec.end(); it++) {
                                if(target == *(it)) {
                                        return true;
                                }
                        }
                        return false;
                }
        }
        return false;
    }
};
