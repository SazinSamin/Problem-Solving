#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums){

        int size = nums.size();
        int sum = 0, prev = INT_MIN;

        for(int i=0; i<size; i++) {
            for(int j=i; j<size; j++) {

                int x = nums[j];
                sum += nums[j];
                if(sum > prev) {
                    prev = sum;
                }
                
            }
            sum = 0;
        }
        return prev;
    }
};

int main() {
        vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        Solution s = Solution();
        cout << s.maxSubArray(v);
}
