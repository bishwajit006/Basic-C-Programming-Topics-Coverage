// Use Logical Operator
// && =logicalAND
// || =logical OR
// ! =logical NOT
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter :");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
        printf("Vowel");

    else
        printf("Consonant");

    return 0;

}
