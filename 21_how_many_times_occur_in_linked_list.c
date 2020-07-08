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
void counth()
{
    if(front==NULL)
    {
        printf("\n no elements in the linked list");
    }
    else
    {
    int count=0;
    int s;
    printf("\n enter the elements to count how many:");
    scanf("%d",&s);
    struct node *ptr=front;
    while(ptr!=NULL)
    {
        if(ptr->a==s)
            count++;
        ptr=ptr->next;
    }
    printf("\n %d many times it occur in linked list",count);
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


int main()
{
    int ch=0;
    while(ch<=4)
    {
        printf("\n\n 1,insert");
        printf("\n 2,display");
        printf("\n 3,count");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:disp();break;
            case 3:counth();break;
            case 4:exit(0);break;
        }
    }
}
