// 2. Write a C program to find the value of 𝑛 𝑃 𝑟 , where n and r are taken from keyboard


#include<stdio.h>

int factorial(int n){
        int sum = 1;
        for(int i=n; i>1; i--){
                sum = sum * i;
        }
        return sum;
}


int main(){
        int n, r;
        scanf("%d %d", &n, &r);

        if(r >= n){
                printf("n value should be more than r\n");
        }else{
                int result = factorial(n) / factorial(n - r);
                printf("Result of permutaion: %d", result);
        }
}
