#include<stdio.h>
#include<stdlib.h>

int main()
{
    int friends[10000];
    friends[0]=0;
    friends[1]=1;
    friends[2]=2;
    int n;
    printf("\n enter the number of friends:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        friends[i]=friends[i-1]+(i-1)*friends[i-2];
    }
    printf("\n number of possible ways:%d",friends[n]);
}
