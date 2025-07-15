#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,div;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("Summation = %d\n",sum);

    sub = num1 - num2;
    printf("Substraction = %d\n",sub);

    mul = num1 * num2;
    printf("Multiplication = %d\n",mul);

    div = num1 / num2;
    printf("Division = %d\n",div);

    return 0;

}
