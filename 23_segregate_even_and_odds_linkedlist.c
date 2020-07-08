#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *next;
}*front=NULL,*rear=NULL;

void insert(struct node *fronts,struct node *rears,int element)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->a=element;
    newnode->next=NULL;
    if(fronts==NULL)
    {
        fronts=newnode;
        rears=newnode;
    }
    else
    {
        rears->next=newnode;
        rears=newnode;
    }
}

void inserts()
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
    else{
    struct node *ptr=front;
    printf("\n");
    while(ptr!=NULL)
    {
       printf("%d->",ptr->a);
        ptr=ptr->next;
    }

    }
}

void segregate()
{

    struct node *newfront=NULL;
    struct node *newrear=NULL;
    struct node *ptr=front;
    while(ptr!=NULL)
    {
        if(ptr->a%2==0)
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
    ptr=front;
     while(ptr!=NULL)
    {
        if(ptr->a%2!=0)
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
        printf("\n 3,segregate");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:inserts();break;
            case 2:disp();break;
            case 3:segregate();break;
            case 4:exit(0);break;
        }
    }
}
