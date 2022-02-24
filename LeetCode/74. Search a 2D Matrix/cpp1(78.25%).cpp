class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
        for(auto ito = matrix.begin(); ito != matrix.end(); ito++) {
                auto outVec = (*ito);
                for (auto iti = outVec.begin(); iti != outVec.end(); iti++) {
                        auto inVec = (*iti);
                        if(target >= inVec && target <= inVec) {
                             for(auto it = outVec.begin(); it != outVec.end(); it++) {
                                     if(target == *it) {
                                             return true;
                                     }
                             }   
                        }
                }
        }
        return false;
    }
};
