#include<stdio.h>
#include<stdlib.h>

int jumsearch(int a[],int x,int n)
{
    for(int i=0;i<n;i+=3)
    {
        if(a[i]==x)
            return i;
        else if(a[i]>x)
        {
        int check=0;
            for(int j=i-3;j<=i;j++)
            {
                if(a[j]==x)
                {
                     return j;
                     check=1;
                }
            }
            if(check==0)
                return -1;
        }
    }
}

int main()
{
    int a[10000],n,x;
    printf("\n Enter the size of the array:");
    scanf("%d",&n);
    printf("\n Enter the array(in sorted):");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter the search element:");
    scanf("%d",&x);

    int sea=jumsearch(a,x,n);
    if(sea==-1)
        printf("\n element not found");
    else
        printf("\n found at :%d",sea);
}
