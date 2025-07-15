#include<stdio.h>
int main()
{
    int a[3][4],b[3][4],c,r;
    printf("Enter elements of A matrix :\n");

    //scanning A matrix
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("[%d][%d]=",r,c);
            scanf("%d",&a[r][c]);
        }
        printf("\n");
    }
    printf("\n\nA=");

    //printing A matrix
    for(r=0;r<3;r++)
    {
        printf("\t");
        for(c=0;c<4;c++)
        {

            printf("%d ",a[r][c]);
        }
        printf("\n");
    }


    printf("\n\nEnter the elements of B matrix :\n");
     //scanning B matrix
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("[%d][%d]=",r,c);
            scanf("%d",&b[r][c]);
        }
        printf("\n");
    }
    printf("\n\nB=");

    //printing B matrix
    for(r=0;r<3;r++)
    {
        printf("\t");
        for(c=0;c<4;c++)
        {

            printf("%d ",b[r][c]);
        }
        printf("\n");
    }

return 0;
}
