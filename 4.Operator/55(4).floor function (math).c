//floor mean nicher kichu//
// floor function work for lower integer number or last integer number. Such as 2.256=2.00
#include<stdio.h>
int main()

{

    double x,result;
    printf("Enter any float number :");
    scanf("%lf",&x);

    result = floor(x);
    printf(" Floor number is = %lf",result);

    return 0;


}
