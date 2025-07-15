#include<stdio.h>
int main()
{
    char s1[30]="United Khagan";
    char s2[30]="United State of Ashulia";
    char temp[30];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("First string=%s\n",s1);
    printf("Second striung=%s\n",s2);



    return 0;
}
