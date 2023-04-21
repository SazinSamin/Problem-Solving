class Solution {
public:
    int fib(int n) {
        if(n == 1 || n == 2) return 1;
        int x1 = 0;
        int x2 = 1;
        int temp = 0;
        for(int i = 1; i < n; i++) {
            temp = x1 + x2;
            x1 = x2;
            x2 = temp;
        }
        return temp;
    }
};
