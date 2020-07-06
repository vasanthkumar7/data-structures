#include<stdio.h>
#include<stdlib.h>
struct node
{
int a;
struct node *forward;
struct node *backward;
}*front=NULL,*rear=NULL;
void insert()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);


    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        rear->backward=front;
        rear->forward=front;
    }
    else
    {
        newnode->backward=rear;
        newnode->forward=rear->forward;
       rear->forward=newnode;
        rear=newnode;
    }
}

void insertf()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);


    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        rear->backward=front;
        rear->forward=front;
    }
    else
    {
        front->backward=newnode;
        rear->forward=newnode;
       newnode->forward=front;
       newnode->backward=rear;
       front=newnode;


    }
}
void deleb()
{
    if(front==NULL)
    {
        printf("\n no elements");
    }
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        struct node *ptr=front;
        printf("\n deleting %d",ptr->a);
        rear->forward=front->forward;
        front=front->forward;


        free(ptr);
    }
}

void delef()
{
    if(front==NULL)
    {
        printf("\n no elements");
    }
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        struct node *ptr=rear;
        printf("\n deleting %d",ptr->a);
       front->backward=rear->backward;
        rear=rear->backward;

        free(ptr);
    }
}

void dispb()
{
    if(front==NULL)
    {
        printf("\n no elements");
    }
    else
    {
        struct node *ptr=rear;
        printf("\n");
        do
        {
        printf("%d->",ptr->a);
        ptr=ptr->backward;
        if(ptr==front)
        {
            printf("%d->",ptr->a);
        }
        }while(ptr!=front);
    }
}



void dispf()
{

    if(front==NULL)
    {
        printf("\n no elements");
    }
    else
    {
        printf("\n");
        struct node *ptr=front;
        do
        {
            printf("%d->",ptr->a);
            ptr=ptr->forward;
        }while(ptr!=front);

    }
}
int main()
{

  int ch=0;



    while(ch<=7)
    {
        printf("\n\n 1,insert front");
        printf("\n 2,insert back");
        printf("\n 3,delete front");
       printf("\n 4,display backward");
        printf("\n 5,display forward");

        printf("\n 6,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertf();break;
            case 2:insert();break;
            case 3:deleb();break;
            case 4:dispb();break;

            case 5:dispf();break;

            case 6:exit(0);
            default: printf("wrong option");ch=1;break;
        }
    }
}
