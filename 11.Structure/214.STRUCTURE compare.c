#include<stdio.h>
struct employee
{
    int age;
    int sallary;
};
int main()
{
    struct employee person1={10,35000},person2={1563.,35000};

    if(person1.age==person2.age && person1.sallary==person2.sallary)
        printf("Person-1 equal to Person-2");
    else
        printf("Not equal");

    return 0;
}
