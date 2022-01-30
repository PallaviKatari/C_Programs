//What is the dangling pointer in C?
//A dangling pointer is a pointer that occurs at the time when the object is de-allocated from memory without modifying the value of the pointer.
//A void pointer is a pointer that can point to any data type.
//It points to the deleted object.


//	#include <stdio.h>
//    #include<stdlib.h>
//	int main()
//	{
//	   int *ptr=(int *)malloc(sizeof(int));
//	   int a=560;
//	   ptr=&a;
//	   printf("Address of Pointer:%d",ptr);
//	   free(ptr);
//	   printf("Memory cleared:%d",ptr);
//	   return 0;
//	}

	#include <stdio.h>
    int *fun()

    {
	    //static int y=10; //Global
	    int y=10; //local
	    return &y;
    }
	int main()
	{
        int *p=fun();
        printf("%d", *p);
        return 0;
	}

