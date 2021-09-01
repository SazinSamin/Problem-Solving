//Functions in C

#include <stdio.h>
int heap_arr[4];
int heap_size = 0;

int parent(int i) { return (i - 1) / 2; }
void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}

void insert(int data){
        if (heap_size == 0){
                heap_arr[heap_size++] = data;
        }

        int i = heap_size;
        heap_arr[heap_size++] = data;

        while (i != 0 && heap_arr[parent(i)] < heap_arr[i]){
                swap(&heap_arr[parent(i)], &heap_arr[i]);
                i = parent(i);
        }
}

int max_of_four(int a, int b, int c, int d)
{
        insert(a);
        insert(b);
        insert(c);
        insert(d);

        return heap_arr[0];
}

int main()
{
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ans = max_of_four(a, b, c, d);
        printf("%d", ans);

        return 0;
}

