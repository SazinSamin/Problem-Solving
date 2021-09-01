#include<stdio.h>
#define MAX 1000+1

int main(){
        char c;
        while((c = getchar()) != '\n'){
                (c == ' ') ? printf("\n") : printf("%c", c);
        }
}
