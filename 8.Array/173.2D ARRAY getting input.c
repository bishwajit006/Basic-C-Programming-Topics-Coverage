#include<stdio.h>
int main()
{
    int row,col,r,c;
    int a[50][50];
    printf("How many row :");
    scanf("%d",&r);
    printf("How many col :");
    scanf("%d",&c);
    printf("\nEnter the elements :\n");

    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
     {
        printf("[%d][%d] =",row,col);
        scanf("%d",&a[row][col]);
     }
    }

    for(row=0;row<r;row++) // always first loop for row
    {
        for(col=0;col<c;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}

