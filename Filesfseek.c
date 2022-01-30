
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//   int num;
//   FILE *fptr;
//
//   // use appropriate location if you are using MacOS or Linux
//   fptr = fopen("D:\\program.txt","w");
//
//   if(fptr == NULL)
//   {
//      printf("Error!");
//      exit(1);
//   }
//
//   printf("Enter num: ");
//   scanf("%d",&num);
//
//   fprintf(fptr,"%d",num);
//   fclose(fptr);
//
//   return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//   int num;
//   FILE *fptr;
//
//   if ((fptr = fopen("File1.txt","r")) == NULL){
//       printf("Error! opening file");
//
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//
//   fscanf(fptr,"%d", &num);
//
//   printf("Value of n=%d", num);
//   fclose(fptr);
//
//   return 0;
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//struct threeNum
//{
//   int n1, n2, n3;
//};
//
//int main()
//{
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//
//   if ((fptr = fopen("File4.txt","w")) == NULL){
//       printf("Error! opening file");
//
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//
//   for(n = 1; n < 5; ++n)
//   {
//      num.n1 = n;
//      num.n2 = 5*n;
//      num.n3 = 5*n + 1;
//      fwrite(&num, sizeof(struct threeNum), 1, fptr);
//   }
//   fclose(fptr);
//
//   return 0;
//}
//

//#include <stdio.h>
//#include <stdlib.h>
//
//struct threeNum
//{
//   int n1, n2, n3;
//};
//
//int main()
//{
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//
//   if ((fptr = fopen("File2.txt","r")) == NULL){
//       printf("Error! opening file");
//
//        //Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//
//   for(n = 1; n < 5; ++n)
//   {
//      fread(&num, sizeof(struct threeNum), 1, fptr);
//      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//   }
//   fclose(fptr);
//
//   return 0;
//}



#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
    //r =read  w=write rb=readbinary wb=writebinary
   if ((fptr = fopen("jkusername.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   // Moves the cursor to the end of the file
   fseek(fptr, sizeof(struct threeNum), SEEK_CUR);

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr);
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
      fseek(fptr, sizeof(struct threeNum), SEEK_CUR);
   }
   fclose(fptr);

   return 0;
}
