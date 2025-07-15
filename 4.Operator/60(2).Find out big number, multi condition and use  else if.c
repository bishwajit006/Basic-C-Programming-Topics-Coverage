// find out the big number//
//multi condition//
//if,else if - need condition but else no need condition//
#include<stdio.h>
int main()
{

    int a,b;
    printf(" Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    if(a>b)
        printf("large number : %d\n",a);

   else if(a<b)  //"else if" because multi condition//
                  // "else if" you can use unlimited time//
                  // but "if" and "else" you can use only one time in a programme//
    printf(" large number : %d\n",b);

    else
        printf("equal number : );

 return 0;

}
