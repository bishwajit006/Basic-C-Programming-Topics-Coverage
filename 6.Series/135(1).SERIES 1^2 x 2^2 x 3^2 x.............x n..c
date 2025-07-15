//1^2 x 2^2 x 3^2 x.............x n^2
#include<stdio.h>
int main()
{
    double i,n,sum=1;
    printf("Enter any positive number :");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum * (i*i);
         if(i==1)
            printf("\n1^2 x ",i);
        else if(i==n)
            printf("%.0lf^2",i);
        else
            printf("%.0lf^2 x ",i);

    }
    printf(" = %.0lf\n",sum);


    return 0;
}
