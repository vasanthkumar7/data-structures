#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node *front;
struct node *rear;
}*top=NULL,*back=NULL;

void insertb()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);
    newnode->front=NULL;
    newnode->rear=NULL;
    if(top==NULL)
    {
        top=newnode;
        back=newnode;
    }
    else
    {
    newnode->front=back;
    newnode->rear=back->rear;
    back->rear=newnode;
    back=newnode;
    }
}

void insertf()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);
    newnode->front=NULL;
    newnode->rear=NULL;

    if(top==NULL)
    {
        top=newnode;
        back=newnode;
    }
    else{
        newnode->rear=top;
        top=newnode;
    }
}

void delf()
{

    if(top==NULL)
    {
        printf("\n under flow");
    }
    else
    {
        struct node *ptr=top;
        printf("\n deleting:%d",ptr->a);
        top=top->rear;
        free(ptr);
    }
}



void dispf()
{

    if(top==NULL)
    {
        printf("\n underflow");
    }
    else
    {
        struct node *ptr=top;
        while(ptr!=NULL)
        {
            printf("%d->",ptr->a);
            ptr=ptr->rear;
        }
    }
}




int main()
{

  int ch=0;



    while(ch<=5)
    {
        printf("\n 1,insert front");
        printf("\n 2,insert back");
        printf("\n 3,delete front");

        printf("\n 4,display forward");

        printf("\n 5,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertf();break;
            case 2:insertb();break;
            case 3:delf();break;
            case 4:dispf();break;
            case 5:exit(0);

        }
    }
}

