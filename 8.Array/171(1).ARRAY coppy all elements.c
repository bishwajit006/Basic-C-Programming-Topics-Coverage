#include<stdio.h>
int main()
{
    int array1[5]={20,65,45,85,35},i,array2[5];


    printf("array1 :");
    for(i=0;i<5;i++)
    {
        printf("%d ",array1[i]);
    }

     //copy all elements
    for(i=0;i<5;i++)
    {
        array2[i]=array1[i];
    }

    printf("\narray2 :");
    for(i=0;i<5;i++) //for loop for printing value
    {
      printf("%d ",array2[i]);

    }





    return 0;
}
