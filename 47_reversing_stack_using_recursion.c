#include<stdio.h>
#include<stdlib.h>

int stack[1000],top=-1,dup_top;
int count=-1,count2=0;
void push(int n)
{
   top+=1;
   dup_top=top;
   stack[top]=n;
}

int pop()
{
    if(top==-1)
        return -1;
    else
    {
        int n;
        n=stack[top];
        top=top-1;

        return n;
    }
}
int dpop()
{
    if(top==-1)
        return -1;
    else
    {
        int n;
        n=stack[dup_top];
        dup_top-=1;
        return n;
    }
}

void disp()
{

    if(top==-1)
        printf("\n No elements");
    else
    {
        for(int i=top;i>=0;i--)
            printf("%d->",stack[i]);
    }

    printf("\n");
}

void insert_at_bottom(int n)
{
    if(top=-1)
        push(n);
    else
    {
        int temp=pop();
        insert_at_bottom(n);
        push(temp);
    }
}
int get_top()
{
    return top;
}

int j;
int count3=0;
int save;
void reverse()
{
    if(count3==0)
    {
        count3++;
        j=top;
        save=top;
    }
    if(top!=-1)
    {
        int temp=pop();
        reverse();
        stack[j]=temp;
        j=j-1;
    }
}


int main()
{
   int ch=0;
   int n;

   while(ch<=4)
   {
       printf("\n 1,push");
       printf("\n 2,pop");
       printf("\n 3,reverse");
       printf("\n 4,display");
       printf("\n 5,exit");
       printf("\n Enter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("\n Enter a element to insert:");scanf("%d",&n);push(n);break;
           case 2:pop();break;
           case 3:reverse();count3=0;top=save;printf("\n Reversed");break;
           case 4:disp();break;
           case 5:exit(0);
       }
   }

}
