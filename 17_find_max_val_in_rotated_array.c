#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100000],n,b[10000];
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int max=a[0];
        int product=0;
        for(int j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[n-1]=max;
         printf("\n");

        for(int k=0;k<n;k++)
        {
            product=product+k*a[k];

        }

        b[i]=product;
    }

int ma=b[0];
    for(int i=1;i<n;i++)
    {
        if(b[i>ma])
            ma=b[i];
    }
    printf("\n maximum product afters rotations :%d",ma);
}
