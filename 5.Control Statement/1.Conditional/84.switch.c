//swith keyword- switch,case,break,default//
//switch and case very important//
//break for line break and default work like else//
//write a program that read a digit and display its spelling//
#include<stdio.h>
int main()
{
    int digit ;
    printf("Enter a digit :");
    scanf("%d",&digit);

    switch(digit)

    {


       case 0:
           printf("zero");
           break;
       case 1:
           printf("one");
           break;
        case 2:
           printf("two");
           break;
        case 3:
           printf("three");
           break;
        case 4:
           printf("four");
           break;
        case 5:
           printf("five");
           break;
        case 6:
           printf("six");
           break;
        case 7:
           printf("seven");
           break;
        case 8:
           printf("eight");
           break;
        case 9:
           printf("nine");
           break;

           default: //as like else//
           printf("Invalide digit");

    }
    return 0;

}
