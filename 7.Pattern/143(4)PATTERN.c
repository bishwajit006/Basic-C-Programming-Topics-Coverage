/*
A
A B
A B C

A=65
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
            printf("%c ",col+64); // Printf the col value due to col value is same
        }
        printf("\n");

    }


    return 0;
}
