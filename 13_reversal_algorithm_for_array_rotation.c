#include<stdio.h>
#include<stdlib.h>
void rot(int a[],int n,int r)
{
    for(int i=0;i<r;i++)
    {
        int preserve=a[0];
        for(int j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[n-1]=preserve;
    }


    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10000],n,r;
    printf("\n enter size of the array:");
    scanf("%d",&n);
    printf("\n enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n how many rotations have to be done:");
    scanf("%d",&r);
     printf("\n");
    rot(a,n,r);


}
