#include<stdio.h>
#include<stdlib.h>

void subgroups(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
                printf("%d ",a[k]);
            printf("\n");
        }
        printf("\n");

    }
}
int main()
{
    int a[]={1,2,3,4};
    subgroups(a,4);
}
