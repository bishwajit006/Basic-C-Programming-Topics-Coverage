#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your marks :");
    scanf("%d",&marks);

    if(marks>100 && marks<0)
        printf("Invalid");
    else if(marks>= 80 && marks <=100)
        printf("Grade : A+");
    else if(marks>= 70 && marks <=79)
        printf("Grade : A");
    else if(marks>= 60 && marks <=69)
        printf("Grade : A-");

    else if(marks>= 50 && marks <=59)
        printf("Grade : B");
    else if(marks>= 40 && marks <=49)
        printf("Grade : C");
    else if(marks>= 33 && marks <=39)
        printf("Grade : D");
        else
            printf("Fail");
return 0;
}
