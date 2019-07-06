#include<stdio.h>
#include "PushDownStack.h"
#include<string.h>
#include<stdlib.h>

void next_greater(int arr[],int n)
{
    int i,*result,throwaway,next;
    Stack temp1(50);
    Stack temp2(50);
    result = (int *)calloc(n,sizeof(int));

    for(i = 0;i<n;i++)
    {
        temp1.push(arr[n-i-1]);


    }

    for(i = 0;i<n;i++)
    {

        while(!temp1.isEmpty() && (next = temp1.peak()) <= arr[i])
        {
            next = temp1.pop();
            temp2.push(next);
           // printf("i : %d ; pushed %d to TEMP2\n",i,next);
        }
        if(!temp1.isEmpty())
            result[i] = temp1.peak();
        else
            result[i] = -1;
        while(!temp2.isEmpty())
        {
            next = temp2.pop();
            temp1.push(next);
          //  printf("i : %d ; pushed %d to TEMP1\n",i,next);
        }
        throwaway = temp1.pop();
       // printf("THREW %d \n",throwaway);
    }
    printf("The result is : ");
    for(i = 0;i<n;i++)
    {
        printf(" %d ",result[i]);
    }
}

int main()
{
    int arr2[50],n,k;
    printf("Enter size n : ");
    scanf("%d",&n);
    printf("Enter the array : ");
    for(k = 0;k<n;k++)
    {
        scanf("%d",&arr2[k]);
    }
    next_greater(arr2,n);

}
