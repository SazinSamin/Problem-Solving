// This solution is based on divide & conquer
// if n is negative then make n positive and also the pow now will be inverse calculated (1/x)
// Now if the power is even then we mutiply the number by itself or doubling the values like 2^4 and 2^4 = 2 ^ 8;
// if odd then 2 * 2^n, extra odd number will multiply
// here 2 example of x.


class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n < 0) {
            n = abs(n);
            x = 1/x;
        }
        return (n % 2 == 0) ? myPow(x*x, n/2) : x * myPow(x, n-1);
    }
};
