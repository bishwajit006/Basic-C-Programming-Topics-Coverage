#include<stdio.h>
struct employee
{
    int workhour;


    float sallary;
};
int main()
{
    struct employee person1,person2;

     person1.workhour=10;
     person1.sallary=500.20;

    printf(" person-1\n work hour=%d\n sallary=%.2f$\n", person1.workhour,person1.sallary);

     person2.workhour=12;
     person2.sallary=550.20;

    printf("\n person-2\n work hour=%d\n sallary=%.2f$\n", person2.workhour,person2.sallary);


    return 0;
}
