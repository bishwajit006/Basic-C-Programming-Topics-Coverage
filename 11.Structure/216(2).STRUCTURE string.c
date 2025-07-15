//stdin for take more string,stdin=standard input
#include<stdio.h>
struct employee
{
    char name[50];
    int workhour;
    float sallary;
};
int main()
{
    struct employee person[3];
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter information for employee-%d",i+1);
    printf("\nEnter name of employee:");
    fflush(stdin);//
    gets(person[i].name);
    printf("\nEnter workhour:");
    scanf("%d",&person[i].workhour);
    printf("\nEnter sallary:");
    scanf("%f",&person[i].sallary);
    }


    for(i=0;i<3;i++)
    {
    printf("\n\nName=%s\n",person[i].name);
    printf("workhour=%d\n",person[i].workhour);
    printf("sallary=%0.2f\n",person[i].sallary);
    }


    return 0;
}

