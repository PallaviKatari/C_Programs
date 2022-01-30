//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//char variable1 ='X', variable2 ='Y';
//const char *pointer = &variable1;
////*pointer = variable2;
////The above line is not the correct way to change the pointer value , it will throw an error.
//// Still we can change the pointer by changing the pointer itself
//printf( "Current value of the pointer is : %c\n", *pointer);
//pointer = &variable2;
//printf( "The value of the pointer after change is : %c\n", *pointer);
//}

#include<stdio.h>
#include<stdlib.h>
int main()
{
char variable1 ='X', variable2 ='Y';
char *const pointer = &variable1;
//*pointer = variable2; This is not the correct way to change the pointer address , it will throw an error.
// Still we can change the pointer by changing the pointer itself
printf( "The value pointed by the pointer is : %c\n", *pointer);
printf( "The address pointed by the char pointer is : %d\n\n", pointer);
// We are only changing the variable point by pointer but its address still is the same
*pointer = variable2;
printf( "The value pointed by the pointer is : %c\n", *pointer);
printf( "The address pointed by the char pointer is : %d\n", pointer);
}
