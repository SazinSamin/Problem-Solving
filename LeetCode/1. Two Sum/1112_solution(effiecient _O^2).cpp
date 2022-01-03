#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        
        int size = nums.size();
        
        for(int i=0; i<size-1; i++) {
            for(int j=i+1; j<size; j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);    
                    return result;
                }
            }
        }
        return result;
    }
};
