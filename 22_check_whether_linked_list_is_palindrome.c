#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node *next;
}*front=NULL,*rear=NULL;
void insert()
{
struct node *newnode = (struct node *)malloc(sizeof(struct node));
printf("\n enter the element :");
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

void palindrome()
{
int a[10000];
int i=0;
int check=0;
struct node *ptr=front;
while(ptr!=NULL)
{
    a[i]=ptr->a;
    ptr=ptr->next;
    i++;
}


for(int j=0;j<i/2;j++)
{
    if(a[j]!=a[i-j-1])
    {
        check=1;
    }
    if(check==1)
        break;
}

if(check==0)
printf("\n linked list is a palindrome");
else
    printf("\n linked list is not a palindrome");

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
        printf("\n 3,check whether it is a palindrome or not");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:disp();break;
            case 3:palindrome();break;
            case 4:exit(0);break;
        }
    }
}
