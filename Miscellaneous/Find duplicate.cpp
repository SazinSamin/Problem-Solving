/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.
*/
// there also a similar kind of problem in leetcode, but that was depend on linked list, quit different from this one.


#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int tSum = (n * (n + 1)) / 2;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return sum - tSum;
    }


int main() {
        vector<int> nums = {1, 3, 4, 2, 2};
        cout << findDuplicate(nums);
}
