#include<stdio.h>
int fib(int);

int main(){
    int a;
    printf("input num: ");
    scanf("%d",&a);
    printf("fib(%d) is : %d",a,fib(a));
}

int fib(int a){
    int f[a+1],i,r;
    f[0]=0;
    f[1]=1;
    if (a==0 || a==1)
        return f[a];
    for (i=2; i<a+1; i++){
        f[i]=f[i-1]+f[i-2];
        printf("f[%d]: %d\n",i,f[i]);
    }
    return f[i-1];
    //note:執行完for，i會變成a+1，則f[i]會out of index
}



