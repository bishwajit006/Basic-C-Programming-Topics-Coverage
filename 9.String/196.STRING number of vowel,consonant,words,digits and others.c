#include<stdio.h>
int main()
{
    char s[500],ch;
    int i,vowel,consonant,word,digit,other;
    printf("Enter a strig:");
    gets(s);
    i=vowel=consonant=word=digit=other=0;

    while(s[i]!='\0')
    {
        ch=s[i];//only for make condition

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch==' ')
            word++;
       else if(ch>='0' && ch<='9')
            digit++;
            else
                other ++;

        i++;
    }
    word++;

        printf("Number of vowwel=%d\n",vowel);
        printf("Number of consonant=%d\n",consonant);
        printf("Number of word=%d\n",word);
        printf("Number of digits=%d\n",digit);
        printf("Number of other=%d\n",other);

    return 0;
}
