#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

struct node
{
    char stac[MAX];
    int top;
}sta;

void push(char item)
{
    if (sta.top == (MAX - 1))
        printf ("Stack is Full\n");
    else
    {
    sta.top = sta.top + 1;
    sta.stac[sta.top] = item;
    }
}

void pop()
{
    if (sta.top == - 1)
    {
        printf ("Stack is Empty\n");
    }
    else
    {
        sta.top = sta.top - 1;
    }
}

int main()
{
    char exp[MAX];
    int i = 0;
    sta.top = -1;
    printf("\nINPUT THE EXPRESSION : ");
    scanf("%s", exp);
    for(i = 0;i < strlen(exp);i++)
    {
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
            continue;
        }
        else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if(exp[i] == ')')
            {
                if(sta.stac[sta.top] == '(')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    exit(0);
                }
            }
            if(exp[i] == ']')
            {
                if(sta.stac[sta.top] == '[')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    exit(0);
                }
            }
            if(exp[i] == '}')
            {
                if(sta.stac[sta.top] == '{')
                {
                    pop();
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    exit(0);
                }
            }
        }
    }
    if(sta.top == -1)
    {
        printf("\nBALANCED EXPRESSION\n");
    }
}
