#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],sum[20][20],r,c,nr,nc; //nr=number of row, nc=number of col
    printf("How many row :");
    scanf("%d",&nr);
    printf("How many col :");
    scanf("%d",&nc);
    printf("Enter elements of A matrix :\n");

    //scanning A matrix
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("[%d][%d]=",r,c);
            scanf("%d",&a[r][c]);
        }
        printf("\n");
    }

    printf("\n\nEnter the elements of B matrix :\n");
     //scanning B matrix
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("[%d][%d]=",r,c);
            scanf("%d",&b[r][c]);
        }
        printf("\n");
    }

    //printing A matrix
    printf("A=");
    for(r=0;r<nr;r++)
    {
        printf("\t");
        for(c=0;c<nc;c++)
        {

            printf("%d ",a[r][c]);
        }
        printf("\n");
    }

    //printing B matrix
    printf("\n\nB=");
    for(r=0;r<nr;r++)
    {
        printf("\t");
        for(c=0;c<nc;c++)
        {

            printf("%d ",b[r][c]);
        }
        printf("\n");
    }

    //summation
    for(r=0;r<nr;r++)
    {

        for(c=0;c<nc;c++)
        {

            sum[r][c]=a[r][c]+b[r][c];
        }
        printf("\n");
    }
    printf("\nA+B=");
    for(r=0;r<nr;r++)
    {
        printf("\t");
        for(c=0;c<nc;c++)
        {

            printf("%d ",sum[r][c]);
        }
        printf("\n");
    }

return 0;
}

