#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf(" The sum is= %d \n",sum);

    avg = (float) sum/2;/*data type casting.Due to, otherwise dont show floating number.It has done for showing floating number*/

    printf(" The Average is = %f\n",avg);

    return 0;

}
