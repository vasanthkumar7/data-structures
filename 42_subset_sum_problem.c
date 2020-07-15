#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100][1000];
    int set[1000];
    int n,sum;
    printf("\n enter the set size:");
    scanf("%d",&n);
    printf("\n enter the set:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&set[i]);
    }
    printf("\n Enter the sum:");
    scanf("%d",&sum);
    for(int i=0;i<=sum;i++)
    {
        if(i==0)
            a[0][i]=1;
        else
        a[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(j<set[i-1])
                a[i][j]=a[i-1][j];
            else
                a[i][j]=a[i-1][j]||a[i-1][j-set[i-1]];


        }
    }
      if(a[n][sum]==1)
        printf("\n There is an subset exist with that sum");
      else
        printf("\n There is no subset with that sum");

}
