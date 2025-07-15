#include<stdio.h>
struct man
{
    char name[30];
    int age;
    float sallary;
};

void display(struct man c) //function
{
   printf("\n\nname=%s\n",c.name);
   printf("age=%d\n",c.age);
   printf("sallary=%.2f",c.sallary);
}
int main()
{
    struct man man1, man2;
    strcpy(man1.name,"Bishwajit");// you cant take string directly in structure that is why take it by strcpy
    man1.age=20;
    man1.sallary=20.30;
    display(man1);

    strcpy(man2.name,"Prosenjit");// you cant take string directly in structure that is why take it by strcpy
    man2.age=28;
    man2.sallary=25.30;
    display(man2);



    return 0;
}
