#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1000];
    int search;
    int check=0;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the search element:");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("\n %d found at %d ",a[i],i);
            check=1;
        }
    }
    if(check==0)
        printf("\n Not found");
}
