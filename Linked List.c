#include <stdio.h>

struct node{
    int data;
    struct node*next;
}; /*struct要加;*/

void print_list(struct node*);

int main(){
    struct node*head=NULL;
    struct node*second=NULL;
    struct node*third=NULL;

    /*使用heap存放LL*/
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    /*對node賦值與鍊結next node*/
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

    print_list(head);

    return 0;
}

void print_list(struct node*n){
    printf("Linked List:\n");
    while(n!=NULL){
        printf("%d", n->data);
        n=n->next;
    }
}

