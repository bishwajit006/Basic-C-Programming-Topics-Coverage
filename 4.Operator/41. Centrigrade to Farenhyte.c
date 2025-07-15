//F=9c+32/5
#include<stdio.h>
int main()
{

    float c,f;// c is centrigrade and f is farenheit//
    printf("Enter the value of Centrigrade :");
    scanf("%f",&c);

    f = (9*c/5) + 32;
    printf("Farenheit = %f",f);
    return 0;


}
