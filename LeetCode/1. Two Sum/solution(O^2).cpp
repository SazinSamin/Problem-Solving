// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int size = nums.size();

        for(int i=0; i<size; i++){
                for(int j=0; j<size; j++){
                        if(i != j){
                                if(nums[i] + nums[j] == target){
                                        //cout << i << " " << j;
                                        result.push_back(i);
                                        result.push_back(j);
                                        return result;
                                }
                        }
                }
        }
        return {};        
    }
    
};
