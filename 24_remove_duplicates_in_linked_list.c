
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
    printf("\n enter the element:");
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
        printf("\n no elements");
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

int check(struct node *newfront,int ab)
{
    int check1=1;
    struct node *ptr=newfront;
    while(ptr!=NULL)
    {
        if(ptr->a==ab)
        {
            check1=0;
            break;
        }
        ptr=ptr->next;
    }
    return check1;
}

void remove_duplicate()
{
    struct node *ptr=front;
    struct node *newfront=NULL;
    struct node *newrear=NULL;
    while(ptr!=NULL)
    {
        if(check(newfront,ptr->a))
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
    printf("\n removed duplicates");
}


int main()
{
    int ch=0;
    while(ch<=4)
    {
        printf("\n\n 1,insert");
        printf("\n 2,display");
        printf("\n 3,remove duplicates");
        printf("\n 4,exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:disp();break;
            case 3:remove_duplicate();break;
            case 4:exit(0);break;
        }
    }

}
