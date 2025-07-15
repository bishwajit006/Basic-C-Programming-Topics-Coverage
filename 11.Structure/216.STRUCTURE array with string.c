#include<stdio.h>
struct employee
{
    char name[20];
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
        printf("enter name:\n");
        fflush(stdin);// standard input for stopping output buffering
        scanf("%s",&person[i].name);
        printf("Enter age:\n");
        scanf("%d",&person[i].age);
        printf("Enter sallary:\n");
        scanf("%d",&person[i].sallary);
    }

    for(i=0;i<2;i++)
    {
        printf("Information for person-%d\n",i+1);
        printf("Name=%s\n",person[i].name);
        printf("age=%d\n",person[i].age);
        printf("sallary=%d\n",person[i].sallary);
    }



    return 0;
}
