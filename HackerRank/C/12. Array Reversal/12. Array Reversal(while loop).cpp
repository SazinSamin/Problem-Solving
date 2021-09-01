#include <iostream>
using namespace std;

int main(){
        int n, temp, i, j;
        scanf("%d", &n);
        int array[n];
        for (i = 0; i < n; i++){
                scanf("%d", &array[i]);
        }

        i = 0;
        j = n - 1;
        while (i <= j){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
        }

        for (int i = 0; i < n; i++){
                printf("%d ", array[i]);
        }
}
