#include<stdio.h>
#include<stdlib.h>
int main()
{
    int catlon[100];
    int k;
    catlon[0]=1;
    catlon[1]=1;
    printf("\n which catlon number to print:");
    scanf("%d",&k);
    for(int i=2;i<k+1;i++)
    {
        catlon[i]=0;
        for(int j=0;j<i;j++)
            catlon[i]+=catlon[j]*catlon[i-j-1];
    }
    printf("%d ",catlon[k]);
}
