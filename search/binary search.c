#include<stdio.h>

void bubble_sort(int *, int);
void swap(int *, int *);
void print_array(int [], int);
int bs(int [], int, int, int);

int main(){
    int n=5, i, key;
    int a[n];
    printf("input num: ");
    for (i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("\nori array: ");
    print_array(a,n);
    bubble_sort(&a,n); //需先小到大排序
    printf("\nsorted array: ");
    print_array(a,n);
    printf("\ninput num for search index: ");
    scanf("%d",&key);
    printf("%d is in array[%d]\n",key,bs(a,key,0,n-1));

    return 0;
}

int bs(int a[],int key, int l, int r){
    int mid;
    if (l>r)
        return -1;
    mid=(l+r)/2;
    if(a[mid]==key)
        return mid;
    else if(a[mid]>key)
        return bs(a, key , l, mid-1);
    else
        return bs(a, key , mid+1 , r);
}

void bubble_sort(int *a,int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for (j=0; j<n-1; j++){
            if (a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

void swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void print_array(int a[], int n){
    for (int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}
