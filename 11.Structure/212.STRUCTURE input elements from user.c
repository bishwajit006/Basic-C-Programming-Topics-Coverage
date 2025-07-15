#include<stdio.h>

struct employee
{
    int age;
    int sallary;
};
int main()
{

     struct employee person1,person2;

    printf("Enter Information for person-1:\n");
    printf("\nEnter age:");
    scanf("%d",&person1.age);
    printf("\nEnter sallary:");
    scanf("%d",&person1.sallary);

    printf("\nPerson-1\n");
    printf("age=%d\n",person1.age);
    printf("sallary=%d\n",person1.sallary);

    printf("\nInformation for person-2\n");
    printf("\nEnter age:");
    scanf("%d",&person2.age);
    printf("\nEnter sallary:");
    scanf("%d",&person2.sallary);

    printf("\nPerson-2\n");
    printf("age=%d\n",person2.age);
    printf("sallary=%d\n",person2.sallary);


    return 0;
}
