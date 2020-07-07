#include<stdio.h>
int main()
{
    int fib[1000];
    fib[0]=0;
    fib[1]=1;
    int n;
    printf("what fibanacci number to print:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("\n fibbnacci of %d is %d",n,fib[n]);
}
