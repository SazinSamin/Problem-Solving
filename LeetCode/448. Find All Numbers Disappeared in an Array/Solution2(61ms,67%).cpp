// theory behind the algo -> https://medium.com/@saurav.agg19/find-all-numbers-disappeared-in-an-array-c6a01393909
// The below code is my customization

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            nums[abs(nums[i]) - 1] =  -abs(nums[abs(nums[i]) - 1]);
        }

        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};

/*
for(int i = 0; i < nums.size(); i++) {

            int x = nums[i];
            int y = nums[abs(x) - 1];
            int z = abs(y);
            int f = - z;
            nums[abs(nums[i]) - 1] = f;
            
}
*/
