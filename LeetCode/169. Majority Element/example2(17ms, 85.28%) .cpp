class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_idx = 0;
        int count = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[maj_idx] == nums[i]) {
                count++;
            } else {
                count--;
            }
            if(count == 0) {
                maj_idx = i;
                count = 1;
            }
        }
        return nums[maj_idx];
    }
};
    
