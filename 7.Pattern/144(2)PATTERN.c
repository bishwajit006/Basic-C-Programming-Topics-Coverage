/*
3 3 3
2 2
1
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter N =");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}
