/*concatenation mean 1st string + 2nd string
 like input Bishwajit Tonmoy output BishwajitTonmoy*/
 #include<stdio.h>
 int main()
 {
     char s1[50]="Bishwajit";
     char s2[]="Tonmoy";
     int i=0,len=0,j=0;
     while(s1[i]!='\0')
     {
         i++;
         len++;
     }
     while(s2[j]!='\0')
     {
         s1[len+j]=s2[j];
         j++;
     }
     printf("s1=%s\n",s1);



     return 0;
 }
