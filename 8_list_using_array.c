#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int a[10000];
void insertb()
{
    int b;
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    printf("\n enter a element:");

    scanf("%d",&b);
    a[rear]=b;
}
void insertf()
{
    int b;
    if(front==-1)
    {
        front=0;
        rear=0;
         printf("\n enter a element:");
    scanf("%d",&b);
    a[front]=b;

    }
    else if(front>0)
    {
        front=front-1;
         printf("\n enter a element:");
    scanf("%d",&b);
    a[front]=b;
    }
    else{
        printf("\n you cannot insert in front");
    }

}
void deletef()
{
    if(front==-1)
    {
        printf("\n underflow");
    }
    else{
            printf("\n deleting:%d",a[front]);
        front=front+1;
    }
}
void deleteb()
{
     if(front==-1)
    {
        printf("\n underflow");
    }
    else{
        printf("\n deleting:%d",a[rear]);
        rear=rear-1;
    }

}
void search()
{
    int b;
    printf("\n enter the element you want to search:");
    scanf("%d",&b);

    if(front==-1)
    {
        printf("\n no elements");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            if(a[i]==b)
            {
                printf("\n %d found at %d",b,i);
            }
        }
    }
}

void dispf()
{
    if(front==-1)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d->",a[i]);
        }
    }
}

void dispb()
{
    if(front==-1)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        for(int i=rear;i>=front;i--)
        {
            printf("%d->",a[i]);
        }
    }
}

int main()
{

  int ch=0;



    while(ch<=8)
    {
        printf("\n 1,insert front");
        printf("\n 2,insert back");
        printf("\n 3,delete front");
        printf("\n 4,delete back");
        printf("\n 5,traverse forward");
        printf("\n 6,traverse backward");
        printf("\n 7,search");




        printf("\n 8,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertf();break;
            case 2:insertb();break;
            case 3:deletef();break;
            case 4:deleteb();break;
            case 5:dispf();break;
            case 6:dispb();break;
            case 7:search();break;

            case 8:exit(0);
        }
    }
}
