#include<stdio.h>
double area(double b,double h)
{
    return 0.5*b*h;
}
int main()
{
  double b,h;
    scanf("%lf%lf",&b,&h);
    double result=area(b,h);
    printf("Area=%0.1lf",result);

    return 0;
}
