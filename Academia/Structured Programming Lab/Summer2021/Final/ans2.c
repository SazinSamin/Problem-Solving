#include<stdio.h>

int lcm(int n1, int n2) {
        static int max = 1;
        if(max % n1 == 0 && max % n2 == 0) {
                return max;
        }
        max++;
        lcm(n1, n2);
        return max;
}


int main() {
        int n1, n2;
        printf("\nEnter number 1 & 2: ");
        scanf("%d %d", &n1, &n2);
        int max = (n1 > n2) ? n1 : n2;
        printf("LCM: %d", lcm(n1, n2));
}