/*
1         1            1 2 3
1 2       1 2     +    1 2
1 2 3 = 1 2 3        1
1 2
1
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
     {
        for(col=1;col<=row;col++)
            {
                printf("%d ",col);
            }
            printf("\n");
     }


     for(row=n-1;row>=1;row--)
     {
        for(col=1;col<=row;col++)
            {
                printf("%d ",col);
            }
            printf("\n");
     }

    return 0;
}




























