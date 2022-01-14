class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      
        vector<int> data;

        int size = mat.size();
        int max = 0;
        int sizeOfsize;
        for(int i=0; i < size; i++) {
            sizeOfsize = mat[i].size();
            if(sizeOfsize > max) {
                max = sizeOfsize;
            }
        }

        int totalSize = size * sizeOfsize;
        int reqSize = r * c;
        if(reqSize != totalSize) {
            return mat;
        } 

        for(auto it = mat.begin(); it != mat.end(); it++) {
            for(auto it2 = (*it).begin(); it2 != (*it).end(); it2++) {
                data.push_back(*it2);
            }
        }



        vector<vector<int>> res;
        vector<int> out;

        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                auto num = data.front();
                out.push_back(num);
                data.erase(data.begin());
            }
            res.push_back(out);
            out.clear();
        }


        return res;
    }
};
