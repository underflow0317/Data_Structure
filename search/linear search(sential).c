#include<stdio.h>

int ls_s(int [], int, int);

int main(){
    int n=6, i, key;
    int a[n];
    a[0]=0;
    printf("input num: ");
    for (i=1; i<n; i++)
        scanf("%d", &a[i]);

    printf("\ninput num for search index: ");
    scanf("%d", &key);
    a[0]=key;
    if (key,ls_s(a, key, n)==-1)
        printf("%d is not in array\n",key);
    else
        printf("%d is in array[%d]\n",key,ls_s(a, key, n));

    return 0;
}

int ls_s(int a[],int key, int n){
    int i=n;
    while (a[i]!=key)
        i--;
    return i-1;

}

