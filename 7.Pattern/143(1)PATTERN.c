/*
1
2 2
3 3 3
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("ente N=");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
           printf("%d ",row); //printf row due to row value is same
        }
        printf("\n");
    }
    return 0;
}
