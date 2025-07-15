#include<stdio.h>
int main()
{
    int num[5]={20,30,50,60,80};//initialization


    printf("%d\n",num[0]); //printing
    printf("%d\n",num[1]);

    int sum = num[0]+num[1]+num[2]+num[3]+num[4]; //summation
    printf("sum =%d\n",sum);

    return 0;
}
