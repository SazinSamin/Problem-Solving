class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left, right, middle;
        left = 0; right =  nums.size() - 1; 
        int res = -1;
        while(left <= right) {
            middle = (left + right) / 2;
            if(nums[middle] == target) {
                return middle;
            }
            else if (nums[left] <= nums[middle]) {
                if(target < nums[left] || target > nums[middle]) {
                    left = middle + 1;
                } else {
                    right = middle - 1;
                }
            } else {
                if(target < nums[middle] || target > nums[right]) {
                    right = middle - 1;
                } else {
                    left = middle + 1;
                }
            }
        }
        return -1;
    }
};
