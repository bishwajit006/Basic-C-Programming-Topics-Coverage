/*
  1
 12       1      123
123  =   12   +   12
 12     123        1
  1
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
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
      printf("\n");
    }

    //Down side
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
      printf("\n");
    }

    return 0;
}
