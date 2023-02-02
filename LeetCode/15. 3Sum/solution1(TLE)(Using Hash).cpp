// Using Hash
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++) hashMap.insert(make_pair(nums[i], i));
        int target = 0;
        int targetNum;
        set<vector<int>> finalRes;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(i != j) {
                    int x = nums[i];
                    int y = nums[j];
                    targetNum = target - (nums[i] + nums[j]);
                    if(hashMap.find(targetNum) != hashMap.end()) {
                        int idx = hashMap.find(targetNum)->second;
                        if(idx != i) {
                            if(idx != j) {
                                res.push_back(nums[i]);
                                res.push_back(nums[j]);
                                res.push_back(targetNum);
                                sort(res.begin(), res.end());
                                finalRes.insert(res);
                                res.clear();
                            }
                        }
                    } 
                }
                cout << "\n";
            }
        }

        vector<vector<int>> output;
        for(auto& pair : finalRes) {
            output.push_back(pair);
        }
        
        return output;
    }
};
