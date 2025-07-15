/*
     1
    22
   333
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);
    for(row=1;row<=n;row++)//first work for row
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ",col); // Printf the col value due to col value is same
        }

        //printing number
        for(col=1;col<=row;col++)
        {
          printf("%d",row);
        }
      printf("\n");

  }


    return 0;
}

