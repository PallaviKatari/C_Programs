#include <stdio.h>
void swapnum(int *num1, int *num2) //1000 1004
{
   int tempnum;

   tempnum = *num1;//11
   *num1 = *num2;//77
   *num2 = tempnum;//11
}
int main( )
{
   int num1 = 11, num2 = 77 ;
   printf("Before swapping:");
   printf("\nValue of v1 is: %d", num1);
   printf("\nValue of v2 is: %d", num2);

   //calling swap function
   swapnum( &num1, &num2 ); //1000 1004

   printf("\nAfter swapping:");
   printf("\nValue of v1 is: %d", num1);
   printf("\nValue of v2 is: %d", num2);
}

//#include <stdio.h>
//void swapnum(int num1, int num2) //num1=10=add(10009),num2=20=(10014)
//{
//   int tempnum;
//   printf("\nBefore swapping:");
//   printf("\nValue of num1 is: %d", num1);//10
//   printf("\nValue of num2 is: %d", num2);//20
//   tempnum = num1;//10
//   num1 = num2;//20
//   num2 = tempnum;//10
//   printf("\nAfter swapping:");
//   printf("\nValue of num1 is: %d", num1);//20
//   printf("\nValue of num2 is: %d", num2);//10
//}
//int main( )
//{
//   int v1 = 10, v2 = 20 ;
//   printf("\nBefore swapping:");
//   printf("\nValue of v1 is: %d", v1);//10
//   printf("\nValue of v2 is: %d", v2);//20
//
//   /*calling swap function*/
//   swapnum( v1, v2 ); //v1=10=add(10001),v2=20=(10005)
//
//   printf("\nAfter swapping:");
//   printf("\nValue of v1 is: %d", v1);//10
//   printf("\nValue of v2 is: %d", v2);//20
//}
//
