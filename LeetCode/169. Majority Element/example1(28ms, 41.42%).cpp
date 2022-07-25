class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int len = nums.size();
        for(int i = 0; i < nums.size(); i++) {
            auto search = m.find(nums[i]);
            if(search != m.end()) {
                search->second++;
            } else {
                m.insert({nums[i], 1});
            }
        }

        int max = 0;
        int res = 0;
        
        for(auto it = m.begin(); it != m.end(); it++) {
            if(it->second > max) {
                max = it->second;
                res = it->first;
            }
        }
        return res;
    }
};
