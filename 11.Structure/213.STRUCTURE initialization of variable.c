#include<stdio.h>
struct employee
{
    int workhour;
    int sallary;
};

int main()
{
    struct employee person1={10,25000};// local variale

    printf("work hour=%d\nsallary=%d\n",person1.workhour,person1.sallary);

    return 0;
}

