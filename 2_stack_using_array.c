#include<stdio.h>
#include<process.h>
int main()
{
int top=-1;
int a[1000],b;
int ch=1,i;
printf("starting");
while(ch<=4)
{
    printf("\n 1,push");
    printf("\n 2,pop");
    printf("\n 3,display");
    printf("\n 4,exit");
    printf("\n Enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        if(top==999)
        {
         printf("\n stack overflow");
        }
        else
        {
            top=top+1;
            printf("\n enter element to be pushed:");
            scanf("%d",&b);
            printf("\n pushing->%d",b);
            a[top]=b;
        }
        break;

        case 2:
            if(top==-1)
            {
                printf("\n stack underflow");
            }
            else
            {
                printf("\n poping ->%d",a[top]);
                top=top-1;
            }
            break;

        case 3:
            if(top==-1)
            {
                printf("\n stack is empty");
            }
            else
            {
            printf("\n");
            for(i=top;i>=0;i--)
            {
                printf("%d->",a[i]);
            }
            }
            break;
        case 4:exit(0);
    }
}

}
