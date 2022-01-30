//C Program To Reverse A String Using Recursion

/*#include<stdio.h>

#include<string.h>

int main(void)

{

char mystrg[60];

int leng, g;

// Printing the program name and what the program will do

printf("Program in C for reversing a given string \n ");

printf("Please insert the string you want to reverse: ");

    // fetch the input string from the user

scanf( "%s", mystrg );

// This will find the length of your string with the help of strlen() function of string.h header file

leng = strlen(mystrg);

// iterate through each and every character of the string for printing it backwards or reverse direction

for(g = leng - 1; g >= 0; g--) {

     printf("%c", mystrg[g]);

}

return 0;

}

//C program to Reverse a String Without Using strrev()

#include <stdio.h>

#include <conio.h>

#include <string.h>

void main(){

   char string[20],temp;

   int i,length;

   printf("Enter String : ");

   scanf("%s",string);

   length=strlen(string)-1;

   for(i=0;i<strlen(string)/2;i++){

      temp=string[i];

      string[i]=string[length];

      string[length--]=temp;

   }

   printf("\nReverse string :%s",string);

   getch();

}*/

//A Program to Reverse a String With Pointers

#include <stdio.h>

#include <string.h>

// Function to reverse the string

// using pointers

void reverseString(char* str)

{

int l, i;

char *begin_ptr, *end_ptr, ch;

// Get the length of the string

l = strlen(str);

// Set the begin_ptr and end_ptr

// initially to start of string

begin_ptr = str;

end_ptr = str;

// Move the end_ptr to the last character

for (i = 0; i < l - 1; i++)

end_ptr++;

// Swap the char from start and end

// index using begin_ptr and end_ptr

for (i = 0; i < l / 2; i++) {

// swap character

ch = *end_ptr;

*end_ptr = *begin_ptr;

*begin_ptr = ch;

// update pointers positions

begin_ptr++;

end_ptr--;

}

}

// Driver code

int main()

{

// Get the string

char str[100] = "Hello";

printf("Enter a string: %s\n", str);

// Reverse the string

reverseString(str);

// Print the result

printf("Reverse of the string: %s\n", str);

return 0;

}
