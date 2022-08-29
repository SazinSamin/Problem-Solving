// 1. binary search to find the target index
// 2. if first element match with target then element start from the 0 index of array, else start from the target which got 
//    from the binary search and go left until non-target element arrive,
// 3. if last element match with target then element stop at the last index of array, else start from the target which got 
//    from the binary search and go right until non-target element arrive,


class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
                if(high >= low) {
                        int mid = low + (high - low) / 2;

                        if(nums[mid] == target) {
                                return mid;
                        } else if (nums[mid] > target) {
                                return binarySearch(nums, low, mid - 1, target);
                        } else {
                                return binarySearch(nums, mid + 1, high, target);
                        }
                }
                return -1;
        }


    vector<int> searchRange(vector<int>& nums, int target) {
        int mid = binarySearch(nums, 0, nums.size() - 1, target);
        if(mid == -1) return {-1, -1};
        int start = -1, stop = -1;
        // for start
        if(nums[0] == target) {
                start = 0;
        } else {
                for(int i = mid; i > 0; i--) {
                        if(nums[i] == target) {
                                start = i;
                        }
                }
        }

        if(nums[nums.size() - 1] == target) {
                stop = nums.size() - 1;
        } else {
                for(int  i = mid; i < nums.size(); i++) {
                        if(nums[i] == target) {
                                stop = i;
                        }
                }
        }

        // cout << start << " " << stop << endl;
        return {start, stop};
    }
};
