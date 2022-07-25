class Solution {
public:
    
    
    vector<vector<int>> res;
    
    void permutation(vector<int> arr, int i, int n) {
        if(i == n - 1) {
             res.push_back(arr);
             return; 
        }


        for(int j = i; j < n; j++) {
            swap(arr[i], arr[j]);
            permutation(arr, i+1, n);
            swap(arr[i], arr[j]);
        }
    }
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0, nums.size());
        return res;
    }
};
