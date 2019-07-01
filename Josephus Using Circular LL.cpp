#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    node *next;
};

int main()
{
    int i;
    struct node *t,*x;
    t = new node;
    t->val = 1;
    x  = t;

    for(i = 2;i<=9;i++)
    {
        t->next  = new node;
        t = t->next;
        t->val = i;
    }

    t->next = x;

    while(t != t->next)
    {
        for(i=1;i<5;i++)
        {
            t = t->next;
        }

        printf(" %d ",t->next->val);
        x = t->next;
        t->next = x->next;
        delete x;
    }

    printf("Final answer : %d ",t->val);
}


