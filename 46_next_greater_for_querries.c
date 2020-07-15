#include<stdio.h>
#include<stdlib.h>

int next_great(int a[100],int n,int q)
{
    int check=0;
    int max;
    for(int i=q;i<n;i++)
    {
        if(a[i]>a[q])
        {
            max=a[i];
            check=1;
            break;
        }
    }
    if(check)
    {
        return max;
    }
    else
        return -1;

}
int main()
{
    int a[100];
    int n,q;
    printf("\n Enter the size of array:");
    scanf("%d",&n);
   printf("\n Enter the array:");
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("\n Enter the querry:");
   scanf("%d",&q);
    printf("%d ",next_great(a,n,q));

}
