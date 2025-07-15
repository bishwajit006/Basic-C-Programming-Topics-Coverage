/*
a
a b
a b c
a=97
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
            printf("%c ",col+96); // Printf the row value due to row value is same
        }
        printf("\n");

    }


    return 0;
}
