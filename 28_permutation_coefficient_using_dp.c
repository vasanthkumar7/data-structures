#include<stdio.h>
#include<stdlib.h>
void permutation(int n,int k)
{
    int fib[n+1];
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fib[i]=fact*i;
        fact*=i;
    }

    printf("\n %d",fib[n]/fib[n-k]);
}
int main()
{
    int n,k;
    printf("\n enter the number:");
    scanf("%d",&n);
    printf("\n of which coeffeicient:");
    scanf("%d",&k);
    permutation(n,k);
}
