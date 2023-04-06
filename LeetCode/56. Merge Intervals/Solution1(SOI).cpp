class Solution {
public:

    vector<int> merge(vector<int> v1, vector<int> v2) {
            vector<int> res;
            for(auto i : v1) {
                    res.push_back(i);
            }
            for(auto i : v2) {
                    res.push_back(i);
            }
            sort(res.begin(), res.end());
            return res;
    }
  
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<int> merged;
            for(int i = 0; i < intervals.size() - 1; i++) {
                    if(intervals[i][1] >= intervals[i+1][0] ) {
                            merged = merge(intervals[i], intervals[i+1]);
                            intervals[i][0] = merged[0];
                            intervals[i][1] = merged[merged.size() - 1];
                            intervals.erase(intervals.begin() + (i + 1));
                            i--;
                    }
            }
            return intervals;
    }
};
