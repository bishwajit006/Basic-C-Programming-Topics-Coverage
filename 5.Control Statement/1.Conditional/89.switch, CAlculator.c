//character(+, -, *, / ) they are character data type//
#include<stdio.h>
int main()
{
    double num1,num2;
    char operat;


printf("Enter an Operator (+,-,*,/) : ");
    scanf("%c",&operat);

  printf("Enter two numbers :");
     scanf("%lf %lf",&num1,&num2);


     switch(operat)
    {

        case '+' :
            {
                printf("%lf+%lf = %lf\n",num1,num2,num1+num2);
                break;
            }

    case '-' :
            {
                printf("%lf-%lf = %lf\n",num1,num2,num1-num2);
                break;
            }


    case '*' :
            {
                printf("%lf*%lf = %lf\n",num1,num2,num1*num2);
                break;
            }

    case '/' :
            {
                printf("%lf/%lf = %lf\n",num1,num2,num1/num2);
                break;
            }
        default:
            printf(" invalid number");
    }


return 0;

}
