#include<stdio.h>
#include<stdlib.h>

typedef int itemType;
class Stack
{
    private:
        itemType *stacc;
        int top;

    public:
        Stack(int max = 100)
        {
            stacc = new itemType[max]; //stacc = (itemType *)calloc(max,sizeof(int));
            top = -1;
        }

        ~Stack()
        {
            delete stacc;
        }
        void push(int val)
        {
            stacc[++top] = val;
        }
        int pop()
        {
            return stacc[top-- ];
        }
        int isEmpty()
        {
            if(top == -1)
            {
                return 1;
            }
            else
                return 0;
        }

        void display()
        {
            int i;
            for(i = 0;i<=top;i++)
            {
                printf(" %d ",stacc[i]);
            }
        }

};


