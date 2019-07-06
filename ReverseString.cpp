#include<stdio.h>
#include "PushDownStack.h"
#include<string.h>
#include<stdlib.h>



void reverse_string(char *arr)
{
    Stack temp1(50);
    int i;

    for(i = 0;i<strlen(arr); i++)
    {
        temp1.push(arr[i]);
    }

    for(i=0;i<strlen(arr); i++)
    {
        arr[i] = temp1.pop();
    }
}

int main()
{
    int j;
    char arr2[50];
    printf("Enter the string : ");
    gets(arr2);
    reverse_string(arr2);
    printf("The string reversed is : ");
    for(j=0;j<strlen(arr2);j++)
    {
        printf("%c",arr2[j]);
    }
}
