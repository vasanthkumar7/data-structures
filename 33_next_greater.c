#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10000];
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int max=a[i];
        for(int j=i+1;j<n;j++)
        {
           if(a[j]>max)
           {
               max=a[j];
               break;
           }
        }
        if(max!=a[i])
            printf("\n %d ---- %d ",a[i],max);
        else
            printf("\n %d --- -1",a[i]);
    }



}
