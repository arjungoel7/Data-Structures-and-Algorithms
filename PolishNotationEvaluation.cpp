#include "PushDownStack.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 50



    int eval_post(char postfix[])
    {
        int i,temp;
        Stack evalstack(50);
        char a,b;
        for(i = 0;i<strlen(postfix); i++)
        {
            if(postfix[i] >= '0' && postfix[i] <= '9')
                evalstack.push(postfix[i] - '0');
            else
            {
                a = evalstack.pop();
                b = evalstack.pop();
                switch(postfix[i])
                {
                    case '+':   temp = b + a;
                                break;
                    case '-':   temp = b - a;
                                break;
                    case '*':   temp = b * a;
                                break;
                    case '/':   temp = b/a;
                                break;
                    case '^':   temp = pow(b,a);
                                break;
                }

                evalstack.push(temp);
            }
        }
        temp = evalstack.pop();
        return temp;
    }

int main()
{
    int result;
    char expression[MAX];
    printf("Enter postfix expression : ");
    gets(expression);
    result = eval_post(expression);
    printf("The result is : %d ",result);
}


