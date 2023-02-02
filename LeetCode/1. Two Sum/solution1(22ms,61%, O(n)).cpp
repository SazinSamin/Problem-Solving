class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashMap;
        vector<int> res;
        int targetNum;
        for(int i = 0; i < nums.size(); i++) {
                targetNum = target - nums[i];
                if(hashMap.find(targetNum) != hashMap.end() && hashMap.find(targetNum)->second != i) {
                    res.push_back(hashMap.find(targetNum)->second);
                    res.push_back(i);
                } else {
                    hashMap.insert(make_pair(nums[i], i));
                }
        }
        return res;
    }
};
