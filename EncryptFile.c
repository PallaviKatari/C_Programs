#include <stdio.h>
#include <stdlib.h>

void main()
{
	char fname[20], ch;
	FILE *fpts, *fptt;

	printf("\n\n Encrypt a text file :\n");
	printf("--------------------------\n");

	printf(" Input the name of file to encrypt : ");
	scanf("%s",fname); //jkusername.txt

	fpts=fopen(fname, "r"); //jkusername.txt
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fpts); //jkusername.txt
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+100; //256 ASCII Y 89+100
			fputc(ch, fptt); //temp.txt(encrypted file)
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w"); //jkusername.txt
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	fptt=fopen("temp.txt", "r");//temp.txt
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(4);
	}
	while(1)
	{
		ch=fgetc(fptt); //temp.txt(encrypted file)
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts); //(jkusername.txt)
		}
	}
	printf(" File %s successfully encrypted ..!!\n\n", fname);
	fclose(fpts);
	fclose(fptt);
}
