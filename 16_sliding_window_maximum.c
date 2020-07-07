#include<stdio.h>
#include<stdlib.h>
void side(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        int max=a[i];
        for(int j=i+1;j<i+k;j++)
        {
         if(a[j]>max)
            max=a[j];
        }
        a[i]=max;
    }
    for(int i=0;i<n-k+1;i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int a[10000];
    int n,k;
    printf("\n enter the size of the array:");
    scanf("%d",&n);
    printf("\n enter the array:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\n enter how many slide to check:");
    scanf("%d",&k);
    side(a,n,k);
}
