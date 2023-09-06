#include<stdio.h>

void print_array(int [], int);
int ls(int [], int, int);

int main(){
    int n=5, i, key;
    int a[n];
    printf("input num: ");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\narray: ");
    print_array(a, n);
    printf("\ninput num for search index: ");
    scanf("%d", &key);

    if (ls(a, key, n)== -1)
        printf("%d is not in array",key);
    else
        printf("%d is in array[%d]\n",key,ls(a, key, n));

    return 0;
}

int ls(int a[],int key, int n){
    int i;
    for (i=0;i<n;i++){
        if (a[i]==key)
            return i;
    }
    return -1;

}

void print_array(int a[], int n){
    for (int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
}
