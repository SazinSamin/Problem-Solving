class Solution {
public:
    vector<vector<int>> result;

    void permutation(vector<int> nums, int idx) {
        if(idx == nums.size() - 1) {
                result.push_back(nums);
                return;
        }
        for(int i = idx; i < nums.size(); i++) {
                if(idx != i && nums[idx] == nums[i]) continue;
                swap(nums[idx], nums[i]);
                permutation(nums, idx + 1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        permutation(nums, 0);
        return result;
    }
};
