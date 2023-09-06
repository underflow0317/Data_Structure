#include<stdio.h>

void bubble_sort(int *,int n);
void swap(int *,int *);

int main(){
    int n=5, i;
    int a[n];
    printf("input num: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    bubble_sort(&a,n);

    for (i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}

void bubble_sort(int *a,int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for (j=0; j<n-; j++){
            if (a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

void swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

