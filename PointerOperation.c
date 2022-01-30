#include<stdio.h>
//int main(){
//int number=50;
//int *p;//pointer to int
//p=&number;//stores the address of number variable
//printf("Address of p variable is %u \n",p);
//printf("Value of p variable is %u \n",*p);
//p=p+1;
//printf("After increment: Address of p variable is %u \n",p);// in our case, p will get incremented by 4 bytes.
//return 0;
//}

//#include <stdio.h>
//void main(){
//int number=50;
//int *p;//pointer to int
//p=&number;//stores the address of number variable
//printf("Address of p variable is %u \n",p);
//p=p-1;
//printf("After decrement: Address of p variable is %u \n",p); // P will now point to the immidiate previous location.
//}


#include<stdio.h>
int main(){
int number=50;
int *p;//pointer to int
p=&number;//stores the address of number variable
printf("Address of p variable is %u \n",p);
p=p-3; //subtracting 3 from pointer variable
printf("After subtracting 3: Address of p variable is %u \n",p);
return 0;
}
