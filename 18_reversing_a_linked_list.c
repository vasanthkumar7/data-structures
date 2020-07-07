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

int lenlink()
{
    int count=0;
    struct node *ptr=front;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
void prin(struct node *fron)
{
    int count=0;
    struct node *ptr=fron;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->a);
        ptr=ptr->next;
    }

}


void reverse()
{
    struct node *ptr=front;
    struct node *neptr=front;
    struct node *prev=NULL;
    struct node *temp=NULL;
    while(ptr!=NULL)
    {
        temp=ptr->next;
      ptr->next=prev;
      prev=ptr;
      ptr=temp;
    }
    front=prev;
    printf("\n reversed ");
}
int main()
{
    int ch=0;
    while(ch<=4)
    {
        printf("\n 1,insert");
        printf("\n 2,print");
        printf("\n 3,reverse");
        printf("\n 4,exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:prin(front);break;
            case 3:reverse();break;
            case 4:exit(0);
        }
    }
}
