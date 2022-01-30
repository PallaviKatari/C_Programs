#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char s[100];
  char fname[20]="jktech.txt";
    printf("\n\n Write multiple lines in a text file and read the file :\n");
	printf("------------------------------------------------------------\n");
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);
	printf("\n :: The lines are ::\n");
	fptr = fopen (fname,"w");
	for(i = 0; i < n;i++)
		{
        fflush(stdin);
		fgets(s, sizeof s, stdin);
		fputs(s, fptr);
		}
  fclose (fptr);
}
