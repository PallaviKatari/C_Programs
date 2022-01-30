#include <stdio.h>
#define PI 3.14
//#undef PI
#define MIN(a,b) ((a)<(b)?(a):(b))
#define NUMBER 15
#define number 15

int square=number*number;

void main()
{
   printf("\n%f",PI);
   printf("\nMinimum between 10 and 20 is: %d\n", MIN(10,20));
   printf("\n%d",square);

   #if (NUMBER==0)
        printf("Value of Number is: %d",NUMBER);
   #else
   printf("\nValue of Number is non-zero");
   #endif

}

//#include <stdio.h>
//
//// macro definition
//#define LIMIT 5
//int main()
//{
//    for (int i = 0; i < LIMIT; i++) {
//        printf("%d \n",i);
//    }
//
//    return 0;
//}

