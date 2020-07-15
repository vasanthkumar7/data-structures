#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int f,int r,int x)
{
    while(r>=f)
    {
        int m =f+(r - f)/ 2;

        if(a[m]==x)
            return m;
        else if(a[m]>x)
            return binary_search(a,f,m-1,x);
        else if(a[m]<x)
            return binary_search(a,m+1,r,x);
    }
    return -1;
}

int main()
{
    int a[10000],n,search;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter the search element:");
    scanf("%d",&search);
    int sea=binary_search(a,0,n-1,search);
   if(sea==-1)
    printf("\n Not found ");
   else
    printf("\n Found at :%d",sea);
}
