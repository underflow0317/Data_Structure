#include<stdio.h>
#define max 1000 //stack最大容量
void print_array(int [], int );
int stack[max];
int top=-1;
int isEmpty();
int isFull();
void push(int);
int pop();

int main(){
    int n=5, i ;
    int data;
    printf("input %d data : ",n);
    for (i=0; i<n; i++){
        scanf("%d", &data);
        push(data);
    }
    printf("stack :\n");
    print_array(stack,n);
    while (!isEmpty())
        printf("stack pop up : %d\n",pop());
    pop();

    return 0;
}

int isEmpty(){
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull(){
    if (top>=max)
        return 1;
    else
        return 0;
}

void push(int data){
    if (isFull())
        printf("stack is full\n");
    else {
        top++;
        stack[top]=data;
    }
}

int pop(){
    int data;
    if(isEmpty())
        printf("stack is null\n");
    else{
        data=stack[top];
        top--;
        return data;
    }
}

void print_array(int a[], int n){
    for (int i=0; i<n; i++)
        printf("%d\n",a[i]);
}

