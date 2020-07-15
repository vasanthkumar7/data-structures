#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node *left;
    struct node *right;
};
struct node* create()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("\n enter the element(-1 to exit or no node):");
    scanf("%d",&x);
    if(x==-1)
        return 0;

    newnode->a=x;
    printf("\n enter the left child of %d:",x);
    newnode->left=create();
    printf("\n enter the right child of %d:",x);
    newnode->right=create();

    return newnode;
};
int check=0;
void disp(struct node* head,int check)
{
    if(head!=NULL)
    {
    printf("%d->%d ",check,head->a);
    disp(head->left,head->a);
    disp(head->right,head->a);
    }


}

int main()
{
    struct node *head;
    int ch=0;
    while(ch<=3)
    {
        printf("\n\n 1,create a binary tree");
        printf("\n 2,display");
        printf("\n 3,exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:head=create();break;
            case 2:disp(head,0);break;
            case 3:exit(0);
        }
    }
}
