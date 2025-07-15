// trunc function can remove floating number. Such as 5.25=5.00
#include<stdio.h>
int main()
{

    double x,result;
    printf("Enter any float number :");
    scanf("%lf",&x);

    result = trunc(x);
    printf("Trunc is = %lf\n",result);

    return 0;


}
