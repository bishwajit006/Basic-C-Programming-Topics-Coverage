//1^3 x 3^3 x 5^3 x.............x n^3
#include<stdio.h>
int main()
{
    double i,n,sum=1;
    printf("Enter any positive number :");
    scanf("%lf",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum * (i*i*i);
         if(i==1)
            printf("\n1^3 x ",i);
        else if(i==n)
            printf("%.0lf^3",i);
        else
            printf("%.0lf^3 x ",i);

    }
    printf(" = %.0lf\n",sum);


    return 0;
}
