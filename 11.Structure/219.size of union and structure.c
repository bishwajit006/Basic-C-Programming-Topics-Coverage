#include<stdio.h>
union test1
{
    int a,b;
};
union test2
{
    char ch;
    int a;
};
union test3
{
    char name[30];
    double d;
};
struct test4
{
    int a;
    float b;
    double c;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    printf("sizeof(test1)=%d\n",sizeof(t1));
    printf("sizeof(test2)=%d\n",sizeof(t2));
    printf("sizeof(test3)=%d\n",sizeof(t3));
    printf("sizeof structure=%d\n",sizeof(t4));



    return 0;
}
