//num1 ? num2 : num2  it has three part that is why it is called ternary
//conditional operator less use
#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    large = (num1>num2) ? num1 : num2;
    printf("Large number is : %d",large);

    return 0;
}
