#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
void insert(int a[])
{
    int b;
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else{
        rear++;

    }
printf("\n enter a element:");
    scanf("%d",&b);

    a[rear]=b;

}

void del(int a[])
{

    if(front==-1)
    {
        printf("\n underflow");
    }
    else{
        printf("\n deleting:%d",a[front]);
        front++;
    }
}

void disp(int a[])
{
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d->",a[i]);
    }
}


int main()
{
    int ch=0;
    int a[10000];


    while(ch<=4)
    {
        printf("\n 1,insert");
        printf("\n 2,delete");
        printf("\n 3,display");
        printf("\n 4,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert(a);break;
            case 2:del(a);break;
            case 3:disp(a);break;
            case 4:exit(0);
        }
    }
}
