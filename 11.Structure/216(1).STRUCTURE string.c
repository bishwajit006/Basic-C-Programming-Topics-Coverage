#include<stdio.h>
struct employee
{
    char name[50];
    int workhour;
    float sallary;
};
int main()
{
    struct employee person1,person2;
    printf("\nEnter name of employee:");
    gets(person1.name);
    printf("\nEnter workhour:");
    scanf("%d",&person1.workhour);
    printf("\nEnter sallary:");
    scanf("%f",&person1.sallary);

    printf("\n\nName=%s\n",person1.name);
    printf("workhour=%d\n",person1.workhour);
     printf("sallary=%0.2f\n",person1.sallary);


    return 0;
}

