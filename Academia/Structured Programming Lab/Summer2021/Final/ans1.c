#include<stdio.h>

int gcm(int n1, int n2) {
        if(n2 == 0) return n1;
        return gcm(n2, n1 % n2);
}


int main() {
        int n1, n2;
        printf("\nEnter number 1 & 2: ");
        scanf("%d %d", &n1, &n2);
        printf("GCD: %d", gcm(n1, n2));
}