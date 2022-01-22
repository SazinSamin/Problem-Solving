class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size = nums.size();
        int Max = INT_MIN, Min = INT_MAX;
        for(int i=0; i <size; i++) {
                Max = max(Max, nums[i]);
                Min = min(Min, nums[i]);
        }
        int res;
        for(int i=1; i<=Max; i++) {
                if(Max % i == 0 && Min % i == 0) {
                        res  = i;
                }
        }
        return res;
    }
};
