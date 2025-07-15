/*
  *
 * *
* * *
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        //printing stars
        for(col=1;col<=row;col++)
        {
            printf("* ",col);
        }
        printf("\n");
    }

    return 0;
}
