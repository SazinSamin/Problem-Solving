// 3. Take 1 and 50 from keyboard as the input and write a C program to check if any number between
// 1 and 50 is even or not. Display the even number. Also, determine and print the sum of all even
// numbers between 1 and 50 using a for loop.


#include<stdio.h>

int main(){
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        int sum  = 0;
        for(int i=n1; i<n2; i++){
                if(i % 2 == 0){
                        printf("%d ", i);
                        sum += i;
                }
        }

        printf("\nSum of all even numbers: %d", sum);
}
