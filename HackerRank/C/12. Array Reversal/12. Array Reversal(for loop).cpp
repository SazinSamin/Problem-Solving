#include <stdio.h>

int main(){
        int n, temp;
        scanf("%d", &n);
        int array[n];
        for (int i = 0; i < n; i++){
                scanf("%d", &array[i]);
        }

        for (int i = 0, j = n - 1; i <= j; i++, j--){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
        }

        for (int i = 0; i < n; i++){
                printf("%d ", array[i]);
        }
}

