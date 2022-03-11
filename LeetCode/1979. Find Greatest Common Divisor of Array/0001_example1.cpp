class Solution {
public:
    int gcd(int n1, int n2) {
            if(n2 == 0) {
                    return n1;
            }
            return gcd(n2, n1 % n2);
    }    

    int findGCD(vector<int>& nums) {
        auto max = max_element(nums.begin(), nums.end());
        auto min = min_element(nums.begin(), nums.end());
        return gcd(*max, *min);
    }
};
