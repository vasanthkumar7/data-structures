#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int top;
    int capacity;

    int* array;
};

struct stack* createnode(int capacity)
{
    struct stack* node=(struct stack*)malloc(sizeof(struct stack));
    node->top=-1;
    node->capacity=capacity;
    node->array=(int*)malloc(capacity*sizeof(int));
    return node;
};
int isoperand(char ch)
{
    return (ch>='a' && ch<='z')||(ch>='A' && ch<='Z');
}

int prec(char ch)
{
    switch(ch)
    {
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 2;
    case '^':return 3;
    }
    return -1;
}

void push(struct stack* Stack,char ch)
{
    Stack->array[++Stack->top]=ch;
}

int pop(struct stack* Stack)
{
    return Stack->array[Stack->top--];
}
int isempty(struct stack* Stack)
{
    return Stack->top==-1;
}
char peer(struct stack* Stack)
{
    return Stack->array[Stack->top];
}

int infixtopostfix(char exp[])
{
    int i,k=-1;
    struct stack* Stack=createnode(strlen(exp));
    for(i=0,k=-1;exp[i];i++)
    {
        if(isoperand(exp[i]))
            exp[++k]=exp[i];
        else if(exp[i]=='(')
        push(Stack,exp[i]);
        else if(exp[i]==')')
        {
            while(!isempty(Stack) && peer(Stack)!='(')
                    exp[++k]=pop(Stack);
            if(!isempty(Stack) && peer(Stack)!='(')
                return -1;
            else
            pop(Stack);
        }
        else{
            while(!isempty(Stack) && prec(exp[i])<=prec(peer(Stack)))
                exp[++k]=pop(Stack);
            push(Stack,exp[i]);
        }
    }
    while(!isempty(Stack))
    exp[++k]=pop(Stack);
    exp[++k]='\0';
    printf("%s",exp);
}
int main()
{
    char exp[]="a+b*(c^d-e)^(f+g*h)-i";
    infixtopostfix(exp);

}
