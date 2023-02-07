class Solution {
public:
    bool canJump(vector<int> &nums) {
            int n = nums.size() - 1;
            int target = nums.size() - 1;
            for(int i = n; i >=0; i--) {
                if(i + nums[i] >= target) {
                    target = i;
                }
            }
            return (target == 0) ? true : false;
        }
};
