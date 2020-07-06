#include<stdio.h>
int main()
{
	int a[1000],n,i;
	printf("\n enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
