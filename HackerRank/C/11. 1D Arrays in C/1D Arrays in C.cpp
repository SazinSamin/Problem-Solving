#include<iostream>
using namespace std;

int main(){
        int n, *arr, x, sum;
        scanf("%d", &n);
        arr = (int*) malloc(n * sizeof(int));
        for(int i=0; i<n; i++){
                scanf("%d", arr + i);
        }

        for(int i=0; i<n; i++){
                sum += *(arr + i);
        }

        cout<<sum;
        free(arr);
}
