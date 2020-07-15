#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fib[100];
    fib[0]=1;
    int fact=1;
    int n,r,p;
    printf("\n Enter N:");
    scanf("%d",&n);
    printf("\n Enter R:");
    scanf("%d",&r);
    printf("\n Enter P:");
    scanf("%d",&p);
    for(int i=1;i<=n;i++)
    {
        fib[i]=fact*i;
        fact=fact*i;
    }

    if(r<0 && r>n)
        printf("0");
    else if(r==0 && r==n)
        printf("1");
    else
    printf("%d",(fib[n]/(fib[r]*fib[n-r]))%p);
}
