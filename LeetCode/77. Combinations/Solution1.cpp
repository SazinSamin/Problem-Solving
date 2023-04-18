class Solution {
public:

    void dfs(int n, int k, int idx, vector<int> local,          vector<vector<int>>& result) {
        if(local.size() == k) {
            result.push_back(local);
            return;
        }
        for(int i = idx; i <= n; i++) {
            local.push_back(i);
            dfs(n, k, i+1, local, result);
            local.pop_back();
            }
        }   
    vector<vector<int>> combine(int n, int k) {
        vector<int> local;
        vector<vector<int>> result;
        dfs(n, k, 1, local, result);   
        return result;
    }
};
