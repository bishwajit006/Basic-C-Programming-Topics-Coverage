

#include<stdio.h>
int main()
{
    char ch;
    printf(" Enter a letter :");
    scanf("%c",&ch);

    if(ch == 'a') //char that is why use ''
        printf( "Vowel");
    else if (ch=='e')
        printf("Vowel");
    else if (ch=='i')
        printf("Vowel");
    else if (ch=='o')
        printf("Vowel");
    else if (ch=='u')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;

}
