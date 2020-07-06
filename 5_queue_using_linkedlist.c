#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *next;
}*front=NULL,*rear=NULL;

void insert()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;


    printf("\n enter a node:");
    scanf("%d",&newnode->a);
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void del()
{

    if(front==NULL)
    {
        printf("\n under flow");
    }
    else{
            struct node *ptr=front;

        printf("\n deleting:%d",ptr->a);
        front=front->next;
        free(ptr);
    }
}
void disp()
{

    printf("\n");
    if(front==NULL)
    {
        printf("\n under flow");


    }
    else{
    printf("\n");
    struct node *ptr=front;

        while(ptr!=NULL)
    {
        printf("%d->",ptr->a);
        ptr=ptr->next;
    }
    }

}

int main()
{

  int ch=0;



    while(ch<=4)
    {
        printf("\n 1,enqueue");
        printf("\n 2,dequeue");
        printf("\n 3,display");
        printf("\n 4,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:del();break;
            case 3:disp();break;
            case 4:exit(0);
        }
    }
}
