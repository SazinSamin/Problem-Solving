class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lptr, hptr, target, sum;
        vector<vector<int>> res;

        for(int i = 0; i < nums.size(); i++) {
          if(i == 0 || nums[i] != nums[i-1]) {
            lptr = i+1, hptr = nums.size() - 1;
            while(lptr < hptr) {
              sum = nums[lptr] + nums[hptr] + nums[i];
              if(sum < 0) {
                lptr++;
              } else if(sum > 0) {
                hptr--;
              } else {
                res.push_back({nums[i], nums[lptr], nums[hptr]});
                lptr++;
                while(nums[lptr] == nums[lptr-1] && lptr < hptr) {
                  lptr++;
                }
              }
            }
          }
	      }
      return res;
    }
};
