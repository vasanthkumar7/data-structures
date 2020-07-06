#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *next;
} *top=NULL;
void push()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n enter a element:");
    scanf("%d",&newnode->a);
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;


    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}

void pop()
{

    if(top==NULL)
    {
        printf("\n stack underflow");
    }
    else
    {
        struct node *ptr=top;
        printf("\n poping:%d",top->a);
        top=top->next;
        free(ptr);
    }
}

void disp()
{
    struct node *ptr=top;
    while(ptr!=NULL)
    {
        printf("%d ->",ptr->a);
        ptr=ptr->next;
    }
}
int main()
{
    int ch=0;
    while(ch<=4)
    {
        printf("\n 1,push");
        printf("\n 2,pop");
        printf("\n 3,display");
        printf("\n 4,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:disp();break;
            case 4:exit(0);
        }
    }
}
