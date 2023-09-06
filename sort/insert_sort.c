#include<stdio.h>
void insert_sort(int [], int );
void print_array(int [], int );

int main(){
    int n=5, i, j;
    int a[n];
    printf("input num: ");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    insert_sort(a,n);
    print_array(a,n);


}

void insert_sort(int a[],int n){
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = a[i]; //每輪要被insert的數
        j = i-1;//前一個數
        while (j>=0 && a[j]>temp) {  //如果temp的前一個數>temp
            a[j+1]=a[j]; //前一個數往後移
            j=j-1; //往前找比temp更大的數
        }
        a[j+1]=temp; //找到temp的位置
    }
}

void print_array(int a[], int n){
    for (int i=0; i<n; i++)
        printf("%d ",a[i]);
}



