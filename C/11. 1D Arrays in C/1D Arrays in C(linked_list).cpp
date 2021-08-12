#include<stdio.h>
//#include<stdlib.h> 	//uncomment this header, if you compile it on g++ or other compiler where this will be needed.

struct Node{
        int data;
        struct Node *next;
};
struct Node *head;

void insert(int data){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        if (head == NULL)
        {
                head = temp;
                return;
        }

        temp->next = head;
        head = temp;
}

void display(){
        struct Node *temp = head;
        int sum = 0;
        while (temp != NULL){
                sum += temp->data;
                temp = temp->next;
        }
        printf("%d", sum);      
}

int main(){
        int n, x;
        scanf("%d", &n);
        for(int i=0; i<n; i++){
                scanf("%d", &x);
                insert(x);
        }

        display();
        free(head);
}
