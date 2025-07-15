/*
     1
    12
   123
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
          printf("%d",col); //special note : dont use space after %d
        }
      printf("\n");

  }


    return 0;
}
