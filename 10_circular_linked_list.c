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

    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        rear->next=front;
    }
    else{
    newnode->next=rear->next;
    rear->next=newnode;
    rear=newnode;
    }
}
void dele()
{
    if(front==NULL)
    {
        printf("\n under flow");
    }
    else{
        struct node *ptr=front;
        printf("\n deleting: %d",ptr->a);
        front=front->next;
        rear->next=front;
        free(ptr);
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
        printf("\n");
        struct node *ptr=front;
        do
        {
            printf("%d->",ptr->a);
            ptr=ptr->next;
        }while(ptr!=front);
    }
}


int main()
{

  int ch=0;



    while(ch<=4)
    {
        printf("\n\n 1,insert ");
        printf("\n 2,delete ");
        printf("\n 3,display ");

        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:dele();break;
            case 3:disp();break;
            case 4:exit(0);
            default: printf("wrong option");ch=1;break;
        }
    }
}
