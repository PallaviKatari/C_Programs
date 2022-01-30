#include <stdio.h>

//#define N_CHARS 10  // define the desired buffer size once for code maintenability

int main() // main function should return int
{
    char ch[100], fname[20]; // create a buffer with enough size for N_CHARS chars and the null terminating char
    int n;
    printf("Enter number of characters to read from the file you want:\n");
    scanf("%d",&n);

    FILE *fp;
    printf("enter the name of the file:\t"); //usernamebackup.txt
    scanf("%20s", fname); // get a string with max 20 chars from stdin

    fp=fopen(fname,"r");

    if (fread(ch,1,n,fp)==n)  //5,usernamebackup.txt
        { // check that the desired number of chars was read
        ch[n] = '\0'; // null terminate before printing
        puts(ch);            // print a string to stdout and a line feed after
    }

    fclose(fp);
}
