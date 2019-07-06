#include<stdio.h>
#include "PushDownStack.h"
#include<string.h>
#include<stdlib.h>

void stock_span(int *arr,int n)
{
   int i,j,k = 1,*result,curr,prev,next;
   result = (int *)calloc(n,sizeof(int));

   Stack temp1(50);
   Stack temp2(50);
   for(i = 0;i < n;i++)
   {
       curr = arr[i];
       while(!temp1.isEmpty() && ((prev = temp1.peak()) < curr))
           {
               prev = temp1.pop();
               temp2.push(prev);
               k++;
             //  printf("arr[%d] , Popped %d from TEMP1 and pushed in TEMP2\n",i,prev,k);
           }


       result[i] = k;

       while(!temp2.isEmpty())
       {
           next = temp2.pop();
           temp1.push(next);
           //printf("arr[%d] , Popped %d from TEMP2 and pushed in TEMP1 \n",i,next);
       }

       temp1.push(curr);
       //printf("Pushed %d on TEMP1 \n",curr);

       k = 1;

   }

   printf("The result is : ");
   for(i=0;i<n;i++)
   {
       printf(" %d ",result[i]);
   }
}


int main()
{
    int a,n,*arr2;
    printf("Enter n : ");
    scanf("%d",&n);
    arr2 = (int *)calloc(n,sizeof(int));
    printf("Enter the array : ");
    for(a = 0;a<n;a++)
    {
        scanf("%d",&arr2[a]);
    }
    stock_span(arr2,n);
}
