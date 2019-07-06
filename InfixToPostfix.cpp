#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "PushDownStack.h"
#define MAX 50
int get_priority(char a)
{
    switch(a)
    {
        case '(':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '%':
            return 2;
        case '^':
            return 5;
        default:
            return 0;
    }
}

void infix_to_postfix(char infix[])
{
    int i;
    int k = 0,priority;
    char symbol,postfix[MAX],next = '0';
    Stack infix_stack(50);
    for(i = 0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case '(':   infix_stack.push(symbol);
                        break;

            case ')':   while((next = infix_stack.pop()) != '(')
                             {
                                postfix[k++] = next;
                             }
                        break;

            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
            case '%':
                        priority = get_priority(symbol);
                        while (!infix_stack.isEmpty() && get_priority(infix_stack.peak()) >= get_priority(symbol))
                               postfix[k++] = infix_stack.pop();
                        infix_stack.push(symbol);
                        break;

            default:    postfix[k++] = symbol;
                        break;
        }

    }

    while(!infix_stack.isEmpty())
        postfix[k++] = infix_stack.pop();

    postfix[k]  = '\0';

    printf("The postfix expression is : ");
    for(i=0;postfix[i]!='\0';i++)
    {
        printf("%c",postfix[i]);
    }

}


int main()
{
    char *result,expression[MAX];
    printf("Enter infix expression : ");
    gets(expression);
    infix_to_postfix(expression);

}
