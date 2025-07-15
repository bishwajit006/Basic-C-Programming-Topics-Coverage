// union take memory size which data type size largest
// union share memory location
#include<stdio.h>
union test
{
    int a;
    int b;
};
int main()

{
    union test t1;
    t1.a=25;

    printf("%d \n",t1.a);//a=25
    printf("%d \n",t1.b);//b=25 due to they share memory location





    return 0;
}
