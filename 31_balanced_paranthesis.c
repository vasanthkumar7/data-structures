#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isoperand(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        if(ch=='+' || ch=='^' || ch=='/' || ch=='*' || ch=='-' || ch=='%')
            return 1;
    }
    return 0;
}
int main()
{
    int stack[1000];
    int top=-1;
    char exp[1000];
    int check=0;
    printf("\n enter the expression:");
    scanf("%s",exp);
    for(int i=0;i<strlen(exp);i++)
    {
        if(!isoperand(exp[i]))
        {
        if(exp[i]=='{' )
            stack[++top]=1;
        if(exp[i]=='(')
            stack[++top]=2;
        if(exp[i]=='[' )
            stack[++top]=3;

        if(exp[i]=='}')
        {
        if(stack[top]!=1)
        {
            printf("unbalanced");
            check=1;
            break;

        }
        else
            top--;
        }

        if(exp[i]==')')
        {
        if(stack[top]!=2)
        {
            printf("unbalanced");
            check=1;
            break;

        }
        else
            top--;
        }
        if(exp[i]==']')
        {
        if(stack[top]!=3)
        {
            printf("unbalanced");
            check=1;
            break;
        }
        else
            top--;
        }
        }
    }
    if(!check)
        printf("\n Balanced");
}
