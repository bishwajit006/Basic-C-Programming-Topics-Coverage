#include<stdio.h>
int main()
{

   double a,b,c;
   printf("Enter the number :");
    scanf("%lf",&a);

    printf("Enter the first power :");
    scanf("%lf",&b);

    printf("Enter the second power :");
    scanf("%lf",&c);

    double d = pow(b,c);
    double result = pow(a,d);

    printf(" result = %lf",result);
    return 0;

}
