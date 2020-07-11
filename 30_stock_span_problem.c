#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a[10000];
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j>=0;j--)
        {
            if(a[i]>=a[j])
                count++;
            else
                break;
        }
        printf("%d ",count);
    }
}
