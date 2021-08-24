#include<stdio.h>
#define MAX 10

int main(){
        int array[MAX];
        for(int i=48; i<=57; i++) array[i] = 0;

        int c;
        while((c = getchar()) != '\n'){
                if(c >= 48 && c<= 57){
                        array[c]++;
                }
        }

        for(int i=48; i<=57; i++){
                printf("%d ", array[i]);
        }
}
