#include <stdio.h>

int main(void) {
	int num = 10;

	int *ptr1 = &num;
	int *ptr2;
	//A null pointer is a pointer which points nothing.
	int *ptr3=0;
	int *p= NULL;//initialize the pointer as null.
   printf("The value of pointer is %u\n",p);

	if(ptr1 == 0)
		printf("ptr1: NULL\n");
	else
		printf("ptr1: NOT NULL\n");

	if(ptr2 == 0)
		printf("ptr2: NULL\n");
	else
		printf("ptr2: NOT NULL\n");

	if(ptr3 == 0)
		printf("ptr3: NULL\n");
	else
		printf("ptr3: NOT NULL\n");

		int *ptrvarA = NULL;
        func(ptrvarA);


	return 0;
}

void func(int *ptrvarB)
{
if(ptrvarB == NULL)
{
//Handle NULL pointer input
printf("It is null pointer");
}
else
{
printf("It is not a null pointer");
}
}

