//1+1/2+1/3.....+1/n
#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter any positive number :");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        if(i==1)  // first 1
            printf("\n1+");
        else if(i==n) // last n
            printf("(1/%lf)",i);
        else  // other all numbers
            printf("(1/%lf)+",i);
    }
    printf(" = %lf\n",sum);


    return 0;
}
