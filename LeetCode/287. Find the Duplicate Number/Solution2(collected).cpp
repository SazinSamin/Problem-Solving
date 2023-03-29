// mark each array value with negative, if there is a repetive value then it will already marked
// and detect the repetive value

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[abs(nums[i])] > 0 ) {
                nums[abs(nums[i])] = - nums[abs(nums[i])];
            } else {
                return abs(nums[i]);
            }
        }
        return 0;
    }
};
