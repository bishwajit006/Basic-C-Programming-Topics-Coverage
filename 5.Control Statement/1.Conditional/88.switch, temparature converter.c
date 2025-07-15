#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temparature converter Menu\n ");
    printf(" 1. Fahrenheit to Celcius\n");
    printf(" 2.Celcius to Fahrenheit\n");
    printf("Enter Your Choice :");
    scanf("%d",&choice);

switch(choice)
    {
    case 1:
        {
            printf("Enter the fahrenheit :");
            scanf("%f",&temp);
            convertedtemp=(5*(temp-32))/9; // or convertedtemp=(temp-32)/1.8//
            printf("Celcius temparature is : %f",convertedtemp);
            break ;


        }
    case 2:
        {
            printf("Enter Celcius :");
            scanf("%f",&temp);
            convertedtemp=((9*temp)/5)+32; //or convertedtemp =(temp*1.8)+32
            printf("Fahrenheit temparaqture is : %f",convertedtemp);

        }

    }
return 0;
}
