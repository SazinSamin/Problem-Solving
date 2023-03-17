class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0, times = 1;
        for(int i = 1; i < nums.size(); i++) {
                if(nums[count] != nums[i]) {
                        nums[++count] = nums[i];
                        times = 1;
                } else if(times < 2){
                        nums[++count] = nums[i];
                        times++;
                }
        }
        return ++count;
    }
};
