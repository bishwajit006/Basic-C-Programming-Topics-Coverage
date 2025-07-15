// round function work for a integer number. Such as 2.3=2 and 2.6=3
#include<stdio.h>
int main()
{
    double x,result;
    printf(" Enter the value of x :");
    scanf("%lf",&x);

    result = round(x);

    printf("Round is = %lf",result);
    return 0;

}
