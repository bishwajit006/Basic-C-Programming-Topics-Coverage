/*
  *
 ***
*****
 ***
  *
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);

    //Up side
   for(row=1;row<=n;row++)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        //printing stars
        for(col=1;col<=2*row-1;col++) //2*row-1
        {
            printf("*",col);
        }
        printf("\n");
    }

    //Under side
    for(row=n-1;row>=1;row--)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        //printing stars
        for(col=1;col<=2*row-1;col++) //2*row-1
        {
            printf("*",col);
        }
        printf("\n");
    }

    return 0;
}
