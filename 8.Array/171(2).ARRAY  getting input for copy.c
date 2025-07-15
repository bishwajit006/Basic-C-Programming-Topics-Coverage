#include<stdio.h>
int main()
{
    int array1[50],array2[50],i,n;
    printf("How many numbers :");
    scanf("%d",&n);
     //taking array1
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
     //printing array1
    printf("array1 :");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
      //coping array1 to array2
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
     //printing array2
    printf("\narray2 :");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }




    return 0;
}
