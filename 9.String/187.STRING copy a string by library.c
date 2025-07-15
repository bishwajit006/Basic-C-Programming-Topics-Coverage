/*Library for copy of string,
 strcpy (put in ,from it)
 */
#include<stdio.h>
int main()
{
    char source[]="Bishwajit Das";
    char copy[50];

    strcpy(copy,source);/* Library for copy of string,
                            strcpy (put in ,from it)*/

    printf("source string = %s\n",source);
    printf("new string = %s\n",copy);

    return 0;
}
