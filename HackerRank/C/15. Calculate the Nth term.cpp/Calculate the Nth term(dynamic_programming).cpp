#include <stdio.h>
int memo[20];

int find_nth_term(int n, int a, int b, int c){
        if (n == 1) return a;
        if (n == 2) return b;
        if (n == 3) return c;
        if (memo[n] != -1){
                return memo[n];
        }
        memo[n] = find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n-3, a, b, c);
        return memo[n];
}

int main(){
        int n, a, b, c;
        for (int i = 0; i < 20; i++){
                memo[i] = -1;
        }
        scanf("%d %d %d %d", &n, &a, &b, &c);
        int ans = find_nth_term(n, a, b, c);

        printf("%d", ans);
        return 0;
}

