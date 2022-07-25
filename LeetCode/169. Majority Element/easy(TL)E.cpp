class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        int count = 0;
        int max = 0;
        int majority = ceil(len / 2);
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < len; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
            if(count > majority) {
                return nums[i];
            }
            count = 0;
        }
        return -1;
    }
};
