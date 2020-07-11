#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int min(int a,int b)
{
    if(a<b)
    return a;
    else
        return b;

}
int main()
{

int a[100][100];
int amt=15,n;
printf("\n enter the amount:");
scanf("%d",&amt);
printf("\n enter the number of coins:");
scanf("%d",&n);
int coins[100];
printf("\n enter the coins:");
for(int i=0;i<n;i++)
    scanf("%d",&coins[i]);


a[0][0]=0;
for(int j=1;j<=amt;j++)
    a[0][j]=INT_MAX;

for(int i=1;i<=n;i++)
{
    for(int j=0;j<=amt;j++)
    {
        if(coins[i-1]>j)
            a[i][j]=a[i-1][j];
        else
            a[i][j]=min(a[i-1][j],1+a[i][j-coins[i-1]]);
    }
}
printf("\n minimum number of coins :%d",a[n][amt]);
}
