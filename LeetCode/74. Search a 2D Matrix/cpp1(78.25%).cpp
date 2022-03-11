class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto ito = matrix.begin(); ito != matrix.end(); ito++) {
                auto outVec = (*ito);
                if(target >= *(outVec.begin()) && target <= *((outVec).end() -1)) {
                        for(auto it = outVec.begin(); it != outVec.end(); it++) {
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
