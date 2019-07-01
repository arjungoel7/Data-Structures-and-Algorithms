#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,N,L;
    printf(" Enter L and N : ");
    scanf("%d %d",&L,&N);
    a = (int *)calloc(N,sizeof(int));
    int i,j;
    for(i=2;i<N;i++)
        a[i] = 1;
    for(i=2;i<=N/2;i++)
    {
        for(j=2;i*j<=N;j++)
        {
            a[i*j] = 0;
        }
    }

    for(i=L;i<N;i++)
    {
        if(a[i])
            printf(" %d ",i);
    }
}
