class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> count;
        for(int i = 0; i <= nums.size(); i++) {
            count.push_back(0);
        }
        for(int i = 0; i < nums.size(); i++) {
            count[nums[i]] += 1;
        }

        vector<int> res;
        for(int i = 1; i <= nums.size(); i++) {
            if(count[i] == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};
