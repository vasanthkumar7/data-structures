#include<stdio.h>
#include<stdlib.h>
int binomial_coeffecient(int n,int a)
{
    int bi[n][n+1];
    bi[0][0]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                bi[i][j]=1;
            else
                bi[i][j]=bi[i-1][j]+bi[i-1][j-1];
        }
    }

    return bi[n][a];
}
int main()
{
int n,a;
printf("\n to which power:");
scanf("%d",&n);
printf("\n of which number coeffecient:");
scanf("%d",&a);
printf("%d",binomial_coeffecient(n,a));
}
