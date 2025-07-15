#include<stdio.h>
int main()
{
    int num[5];//declaration

    num[0]=10;//initialization
    num[1]=50;
    num[2]=30;
    num[3]=60;
    num[4]=80;

    printf("%d\n",num[0]); //printing
    printf("%d\n",num[1]);

    int sum = num[0]+num[1]+num[2]+num[3]+num[4]; //summation
    printf("sum =%d\n",sum);

    return 0;
}
