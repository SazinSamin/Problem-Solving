#include<stdio.h>

int main() {
        int n;
        printf("Enter the size of the array: ");
        scanf("%d", &n);
        int array[n][n];
        printf("\nEnter the elements of the array: ");
        for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                        scanf("%d", &array[i][j]);
                }
        }

        printf("\nElements of each column sequentially: \n");
        for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                        printf("%d ", array[j][i]);
                }
        }
}
