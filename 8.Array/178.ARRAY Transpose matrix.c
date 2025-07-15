#include<stdio.h>
int main()
{
    int a[10][10],result[10][10],i,j,r,c;
    printf("Enter the number of Row :\n");
    scanf("%d",&r);
    printf("Enter the number of column :\n");
    scanf("%d",&c);

    //scanning A matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //printing A matrix
    printf("A =");
    for(i=0;i<r;i++)
    { printf("\t");
        for(j=0;j<c;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //Transpose operation
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           result[j][i]=a[i][j];
        }
    }

    //printinf Transpose matrix
    printf("Transpos =");
    for(i=0;i<c;i++)
    {printf("\t");
        for(j=0;j<r;j++)
        {
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
