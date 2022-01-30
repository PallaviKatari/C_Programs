#include <stdio.h>
#include <string.h>

void main()
{
     char str1[30] = "Welcome to C Programming";
     printf("\nLength of string str1: %d", strlen(str1));

     char str2[30] = "Welcome to C Programming";
     //char name[30]="John Doe"
     printf("\nLength of string str2 when maxlen is 30: %d", strnlen(str2, 30));
     printf("\nLength of string str2 when maxlen is 10: %d", strnlen(str2, 10));

     char s1[20] = "Welcome to C++ Programming";
     char s2[20] = "Welcome to C Programming";
     if (strcmp(s1, s2) ==0)
     {
        printf("\nstring 1 and string 2 are equal");
     }
     else
      {
         printf("\nstring 1 and 2 are different");
      }

     char s3[20] = "Welcome to C Programming";
     char s4[20] = "Welcom to C Programming";
     /* below it is comparing first 8 characters of s3 and s4*/
     if (strncmp(s3, s4, 8) ==0)
     {
         printf("\nstring 3 and string 4 are equal");
     }else
     {
         printf("\nstring 3 and 4 are different");
     }

     char s5[10] = "HELLO";
     char s6[20] = " JKTECH TRAINEES";
     strcat(s5,s6); //Concationation/join 2 strings
     printf("\nOutput string after concatenation: %s", s5);

     const char s7[10] = "HELLO";
     s7[10]="JKTECH";
     char a='w';
     a='e';
     const int b=10;
     b=20;
     char s8[20] = " JKTECH TRAINEES";
     strncat(s7,s8, 3);
     printf("\nConcatenation using strncat: %s", s7);

     char s9[30] = "string 9";
     char s10[30] = "string 10 copied into s9";
     /* this function has copied s9 into s10*/
     strcpy(s9,s10); //strcpy(destination,source)
     printf("\nString s9 is: %s", s9);

     char first[30] = "string 1";
     char second[30] = "string 2:strncpy function";
     /* this function has copied first 12 chars of s2 into s1*/
     strncpy(first,second, 12);
     printf("\nString s1 is: %s", first);

      char mystr[30] = "C Programming";
     printf ("\n%s", strchr(mystr, 'P'));

     char mystr1[30] = "C Programming Program";
     printf ("\n%s", strrchr(mystr1, 'P'));

     char inputstr[70] = "String Function in C Programming";
     printf ("\nOutput string is: %s", strstr(inputstr, "Function"));
}
