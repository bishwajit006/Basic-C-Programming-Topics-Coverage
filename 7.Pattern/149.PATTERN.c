/*
1 2 3
  1 2
    1
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N =");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        //printing space
        for(col=1;col<=n-row;col++)
             {
                printf(" ",col);
             }

         //printing number
        for(col=1;col<=row;col++)
             {
                printf("%d",col);//don't use space
             }
       printf("\n");
    }



    return 0;
}
