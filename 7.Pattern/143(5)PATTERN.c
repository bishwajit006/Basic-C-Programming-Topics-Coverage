/*
A
A A
A B C
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
            printf("%c ",row+64); // Printf the row value due to row value is same
        }
        printf("\n");

    }


    return 0;
}
