class Solution {
public:

    int reverse(int x) {
                long r, res = 0;
                while(x != 0){
                        res = (res * 10) + (x % 10);
                        x = x / 10;
                }
                return (res >= INT_MAX || res <= INT_MIN) ? 0 : (int)res;
    }
};
