#include<stdio.h>

int main(){

        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int array[4];
        array[0] = a;
        array[1] = b;
        array[2] = c;
        array[3] = d;

        int max = -1;
        for(int i=0; i<4; i++){
                if(array[i] > max){
                        max = array[i];
                }
        }

        printf("%d", max);

}
