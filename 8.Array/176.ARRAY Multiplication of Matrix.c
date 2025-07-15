// when column = row then you can multiplication in matrix
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10],r1,c1,r2,c2,i,j,k,sum=0;

    printf("Enter row and column for A matrix :\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column for B matrix :\n");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! \n\n");

    printf("Enter row and column for A matrix :\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column for B matrix :\n");
    scanf("%d%d",&r2,&c2);
    }
    // taking input for A matrix
    printf("Enter elements for A matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //taking input for B matrix
    printf("Enter elements for B matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //Multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];

            }
            result[i][j]=sum;
                sum=0;
        }
    }

    //printing A matrix
    printf("\n\nA =");
    for(i=0;i<r1;i++)
    { printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //printing B matrix
     printf("\n\nB =");
    for(i=0;i<r2;i++)
    { printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //printing result matrix
    printf("\n\nA x B =");
    for(i=0;i<r1;i++)
    { printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }









    return 0;
}
