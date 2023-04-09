class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        for(int i = 0; i < intervals.size(); i++) {
                if(ans.empty()) {
                        ans.push_back(intervals[i]);
                } else {
                        vector<int>& a = ans.back();
                        if(a[1] >= intervals[i][0]) {
                                a[1] = max(intervals[i][1], a[1]);
                        } else {
                                ans.push_back(intervals[i]);
                        }
                }
        }
        return ans;

    }
};
