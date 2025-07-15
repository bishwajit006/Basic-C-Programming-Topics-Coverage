/*
1
1 2
1 2 3
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);
    for(row=1;row<=n;row++)//first work for row
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col); // Printf the col value due to col value is same
        }
        printf("\n");

    }


    return 0;
}
