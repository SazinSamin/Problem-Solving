#include <stdio.h>

void myfunc(int *ptr1, int *ptr2);

int main(void){
        int x = 2021, y = 6, z = 3, w = 52;
        myfunc(&x, &y);
        if (x > z){
                myfunc(&x, &w);
                printf("%d\t%d\t%d\n", x, y, z);
        }

        return 0;
}

void myfunc(int *ptr1, int *ptr2) {
        int temp;
        temp = *ptr2;
        *ptr2 = *ptr1;
        *ptr1 = temp;
}
