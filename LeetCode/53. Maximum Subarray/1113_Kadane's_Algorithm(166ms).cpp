// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Algorithm/Dynamic%20Programming/Test/Kadane's_algorithm/0001_Kadane's.cpp
// https://www.youtube.com/watch?v=YxuK6A3SvTs&t=3s

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max_end = 0, max_sum = INT_MIN;

        for(int i=0; i<nums.size(); i++) {

            max_end = max_end + nums[i];

            if(max_end < nums[i]) {
                max_end = nums[i];
            }

            if(max_sum < max_end) { 
                max_sum = max_end;
            }
        }
        return max_sum;
    }
};
