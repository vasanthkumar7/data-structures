#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    int priority;
}elements[10000];
int rear=-1,front=-1;
void insertb()
{
    if(front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    printf("\n enter the element:");
    scanf("%d",&elements[rear].a);
    printf("\n enter priority of the element:");
    scanf("%d",&elements[rear].priority);
}

void insertf()
{
     if(front==0)
    {
        printf("\n no space in front");
    }
    else if(front==-1)
    {
    front=0;
    rear=0;
    printf("\n enter the element:");
    scanf("%d",&elements[rear].a);
    printf("\n enter priority of the element:");
    scanf("%d",&elements[rear].priority);
    }
    else
    {
    front=front-1;
    printf("\n enter the element:");
    scanf("%d",&elements[front].a);
    printf("\n enter priority of the element:");
    scanf("%d",&elements[front].priority);
    }


}
void disp()
{
    if(rear==-1)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d->",elements[i].a);
        }
    }
}

void dispb()
{
    if(rear==-1)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        for(int i=rear;i>=front;i--)
        {
            printf("%d->",elements[i].a);
        }
    }
}
void deleb()
{
    if(front==-1)
    {
        printf("\n under flow");
    }
    else
    {
        printf("\n deleting:%d",elements[rear].a);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        rear=rear-1;
    }
}
void delef()
{
    if(front==-1)
    {
        printf("\n under flow");
    }
    else
    {
        printf("\n deleting:%d",elements[front].a);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front=front+1;
    }
}
void disphighp()
{
    if(rear==-1)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        int max=front;
        for(int i=front+1;i<=rear;i++)
        {

            int s=elements[i].priority;
            int k=elements[max].priority;
            if(s>k)
            {
                max=i;
                s=elements[i].priority;
            }
        }
         printf("\n %d is the element with highest priority",elements[max].a);

    }
}




int main()
{

  int ch=0;
    while(ch<=8)
    {
        printf("\n\n 1,insert at front");
        printf("\n 2,insert at back");
        printf("\n 3,delete front");
        printf("\n 4,delete back");
        printf("\n 5,display forward");
        printf("\n 6,display backward");
        printf("\n 7,display element with high priority");
        printf("\n 8,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertf();break;
            case 2:insertb();break;
            case 3:delef();break;
            case 4:deleb();break;
            case 5:disp();break;
            case 6:dispb();break;
            case 7:disphighp();break;
            case 8:exit(0);

        }
    }
}

