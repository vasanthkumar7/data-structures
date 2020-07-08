#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node *next;
}*front=NULL,*rear=NULL;
void insert()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void disp()
{
    if(front==NULL)
    {
        printf("\n no elements in the linked list");
    }
    else
    {
        struct node *ptr=front;
        printf("\n");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->a);
            ptr=ptr->next;
        }
    }
}

void delete_specific()
{
    struct node *newfront=NULL;
    struct node *newrear=NULL;
    int ch;
    printf("\n enter node to delete:");
    scanf("%d",&ch);

    struct node *ptr=front;
    while(ptr!=NULL)
    {
        if(ptr->a!=ch)
        {
            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            newnode->a=ptr->a;
            newnode->next=NULL;
            if(newfront==NULL)
            {
                newfront=newnode;
                newrear=newnode;
            }
            else
            {
                newrear->next=newnode;
                newrear=newnode;
            }
        }

        ptr=ptr->next;
    }
    front=newfront;
    rear=newrear;
}


int main()
{
    int ch=0;
    while(ch<=4)
    {
        printf("\n\n 1,insert");
        printf("\n 2,display");
        printf("\n 3,delete a specific node");
        printf("\n 4,exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:disp();break;
            case 3:delete_specific();break;
            case 4:exit(0);break;
        }
    }
}
