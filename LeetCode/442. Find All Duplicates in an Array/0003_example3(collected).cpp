class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> res;
        int array[100000] = {0};
        for(int i=0; i<size; i++) {
            array[nums[i]] += 1;
        }

        for(int i=0; i<=size; i++) {
            if(array[i] > 1) {
                res.push_back(i);
            }
        }

        return res;
    }
};
