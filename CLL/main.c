
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
}*Head;
void create(int A[],int size);
void display(struct Node *);



int main(int argc, const char * argv[]) {
    int A[]={2,4,6,8,10};
    create(A,5);
    display(Head);
    printf("\n");
    
    return 0;
}
void create(int A[],int size){
    int i;
    struct Node * t,*last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next = Head;
    last = Head;
    for (int i = 1; i<size; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node * p){
    do{
        printf("%d\t",p->data);
        p=p->next;
        
    }while(p!=Head);
}
