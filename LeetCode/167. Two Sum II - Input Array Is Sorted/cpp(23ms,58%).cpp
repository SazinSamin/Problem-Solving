class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        sort(numbers.begin(), numbers.end());
        int lptr, hptr;
        lptr = 0;
        hptr = numbers.size() - 1;
        int sum;
        vector<int> res;
        while(lptr < hptr) {
            int x = numbers[lptr];
            int y = numbers[hptr];
            sum = numbers[lptr] + numbers[hptr];
            if(sum < target) {
                lptr++;
            } else if (sum > target) {
                hptr--;
            } else {
                res.push_back(lptr+1);
                res.push_back(hptr+1);
                break;
            }
        }
        return res;
    }
};
