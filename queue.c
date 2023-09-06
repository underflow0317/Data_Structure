#include<stdio.h>
#define max 1000
int queue[max];
int front=0;
int rear=0;
int isEmpty();
int isFull();
void add(int);
int dele();
void print_array(int [], int );

int main(){
    int n=5, i ;
    int data,c;
    printf("input 5 data : ");
    for (i=0; i<n; i++){
        scanf("%d", &data);
        add(data);
    }
    printf("queue : ");
    print_array(queue,n);

    dele();
    printf("after delete 1 element,queue : ");
    print_array(queue,n);

    return 0;
}

int isEmpty(){
    if (front==rear )
        return 1;
    else
        return 0;
}

int isFull(){
    if (rear >= max)
        return 1;
    else
        return 0;
}

void add(int data){
    if (isFull())
        printf("queue is full\n");
    else
        queue[rear++]=data;
}

int dele(){
    int data;
    if(isEmpty())
        printf("queue is null\n");
    else{
        data=queue[++front];
        return data;
    }
}

void print_array(int a[], int n){
    for (int i=front; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}


