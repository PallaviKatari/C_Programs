// C Program to demonstrate the use of fseek()
//#include <stdio.h>
//
//int main()
//{
//	FILE *fp;
//	fp = fopen("studentdetails.txt", "r");
//
//	// Moving pointer to end
//	fseek(fp, 0, SEEK_END);
//
//	// Printing position of pointer
//	printf("%ld", ftell(fp));
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//FILE *fx;
//fx = fopen("studentdetails.txt", "r");
////Using the fseek function to move the file pointer to the end
//fseek(fx, 0, SEEK_END);
//// Using the file function in order to Print the position of file pointer
//printf("\nPosition of file pointer is : ");
//printf("%ld \n", ftell(fx));
//// Using the file function 'fseek' to move the file position 10 characters ahead
//fseek(fx,1,SEEK_SET);
//int ch;
//// printing the resulting file after 10 characters
//printf("\nResulting bytes after the 10 characters in a file are: ");
//while( (ch=fgetc(fx)) != EOF)
//// using function 'putchar(x)'' to print the file characters on console
//putchar(ch);
//return 0;
//}

//// C library mandatory to use C I/O operation
//#include <stdio.h>
//int main ()
//{
//// defining the file pointer in order to perform file operations
//FILE *fx;
//// Opening a file using the 'fopen()' function in write mode
//fx = fopen("studentdetails.txt","w+");
//// writing in the file using 'fputs() function'
//fputs("Hello Everyone....Welcome to JKTECH", fx);
////using fseek() function to move the file pointer after 12 characters
//fseek( fx, 18, SEEK_SET );
//// inserting the data in the file
//fputs("Happy C Prg", fx);
////closing the file using 'fclose() function'
//fclose(fx);
//return(0);
//}

// C library mandatory to use C I/O operation
#include <stdio.h>
int main ()
{
// defining the file pointer in order to perform file operations
FILE *fx;
// Opening a file using the 'fopen()' function in write mode
fx = fopen("studentdetails.txt","w+");
// writing in the file using 'fputs() function'
fputs("Hello Everyone....Welcome to JKTECH", fx);
//using fseek() function to move the file pointer after 12 characters
fseek( fx, 0, SEEK_END );
fputs("\n",fx);
// inserting the data in the file
fputs("Happy C Prg", fx);
//closing the file using 'fclose() function'
fclose(fx);
return(0);
}

