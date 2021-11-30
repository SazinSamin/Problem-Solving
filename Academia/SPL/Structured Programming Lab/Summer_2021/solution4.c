// 4. Write a program in C which finds the sum of the series using for loop: 1 4 + 2 4 + 3 4 + . . . . . . . . . +
// n 4 , n taking from the keyboard. You are not allowed to use algebraic summation law.


#include<stdio.h>
#include<math.h>

int main(){

        int n;
        scanf("%d", &n);
        long long int sum = 0;

        for(int i=1; i<=n; i++){
                int x = pow(i , n);
                sum += x;
        }
        printf("Sum of series for %d: %lld", n, sum);
}
