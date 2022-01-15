class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> set;
    unordered_set<int> duplicate;

    for(int i=0; i < nums.size(); i++) {
            if(!set.empty()){
                if(set.find(nums[i]) != set.end()) {
                    duplicate.insert(nums[i]);
                } else {
                    set.insert(nums[i]);
                }
            } else {
                set.insert(nums[i]);
            }
        }
        vector<int> res;
        if(!duplicate.empty()) {
            for(auto it = duplicate.begin(); it != duplicate.end(); it++) {
           res.push_back(*it);
        }
        }
        return res;
    }
};
