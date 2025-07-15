//Use pow library for power//
#include<stdio.h>
int main()
{

   double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    double d = pow(b,c);
    double result = pow(a,d);
    printf(" result = %lf",result);

}
