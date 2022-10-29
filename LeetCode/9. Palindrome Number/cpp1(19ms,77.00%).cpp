class Solution {
public:
    bool isPalindrome(int x) {
        // if the number is negative or 0 or divisible by 10 then return false immediatly
        if(x < 0 || (x != 0 && (x % 10 == 0))) return false;
        int reverse = 0;
        
        // reverse the of half the number
        while(reverse < x) {
                reverse = reverse * 10 + x % 10;
                x /= 10;
        }
        // if number is even then x == reverse, if odd then cut the middle number and compare.
        return x == reverse || x == reverse / 10;
    }
};
