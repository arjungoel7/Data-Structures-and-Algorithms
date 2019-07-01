#include<stdio.h>

int gcd(int a,int b)
{
    if(b < 1)
        return a;
    else
    {
        if((a-b) < b)
            return gcd(b,a-b);
        else
            return gcd(a-b,b);
    }
}

int main()
{
    int a,b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        printf(" gcd : %d \n",gcd(a,b));
    }
}
