class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<int> inner;
        vector<vector<int>> outer;
        outer.push_back({1});
        if(numRows == 1) return outer;        
        outer.push_back({1, 1});
        if(numRows == 2) return outer;        
        int last;

        for(int i = 0; i < numRows - 2; i++) {
            inner.push_back(1);
            last = outer.size() - 1;
            for(int j = 0; j < outer[last].size() - 1; j++) {
                inner.push_back({outer[last][j] + outer[last][j+1]});
            }
            inner.push_back(1);
            outer.push_back(inner);
            inner.clear();
        }

        return outer;
    }
};
