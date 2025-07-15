#include<stdio.h>
struct employee
{
    int age;
    int sallary;
};
int main()
{
    struct employee person[2];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter Information for person-%d\n",i+1);
        printf("Enter age:");
        scanf("%d",&person[i].age);
        printf("\nEnter sallary:");
        scanf("%d",&person[i].sallary);
    }

    for(i=0;i<2;i++)
    {
        printf("Information for person-%d\n",i+1);
        printf("Age=%d\n",person[i].age);
        printf("sallary=%d\n",person[i].sallary);
    }

    return 0;
}
