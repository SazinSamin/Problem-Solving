class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0;
        int high =  nums.size() - 1;
        vector<int> res;
        for(int i = nums.size() - 1; i >= 0; i--) {
                if(abs(nums[low]) <= abs(nums[high])) {
                        res.insert(res.begin(), ((nums[high]) * nums[high]));
                        high--; 
                } else {
                        res.insert(res.begin(), ((nums[low]) * nums[low]));
                        low++;
                }
        }
        return res;
    }
};
