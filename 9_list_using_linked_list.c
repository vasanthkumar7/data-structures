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
    printf("\n enter a element to insert:");
    scanf("%d",&newnode->a);
    if(front ==NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    newnode->next=NULL;
}

void insertf()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element to insert:");
    scanf("%d",&newnode->a);
    if(front ==NULL)
    {
        front = newnode;
        rear = newnode;
        newnode->next=NULL;
    }
    else
    {
       newnode->next=front;
       front=newnode;
    }

}
void search()
{
    int count=0;
    int flag=0;
    int b;
    if(front==NULL)
    {
        printf("\n no elements");
    }
    else
    {
      printf("\n enter a element:");
    scanf("%d",&b);
    struct node *ptr=front;
    while(ptr!=NULL)
    {
        if(ptr->a==b)
        {
            printf("\n %d found at %d",b,count);
            flag=1;
        }
        ptr=ptr->next;
        count++;
    }

    if(flag==0)
    {
        printf("\n element not found");
    }
    }

}


void del()
{
    if(front==NULL)
    {
        printf("\n underflow");
    }
    else
    {
        struct node *ptr=front;
        printf("\n deleting: %d",ptr->a);
        front=front->next;
        free(ptr);
    }
}

void delb()
{
    if(front==NULL)
    {
        printf("\n underflow");
    }
    else
    {
        struct node *ptr=front;
        struct node *pos;
       while(ptr->next!=NULL)
       {
           ptr=ptr->next;
       }
       printf("\n deleting : %d",ptr->next->next->a);

       free(ptr);
        ptr->next=NULL;

    }
}

void disp()
{
    if(front==NULL)
    {
        printf("\n underflow");
    }
    else
    {
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



    while(ch<=6)
    {
        printf("\n\n 1,insert back");
        printf("\n 2,insert front");
        printf("\n 3,delete front");

        printf("\n 4,display");
        printf("\n 5,search");
        printf("\n 6,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:insertf();break;
            case 3:del();break;
            case 4:disp();break;
            case 5:search();break;
            case 6:exit(0);
            default: printf("wrong option");ch=1;break;
        }
    }
}
