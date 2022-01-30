#include <stdio.h>

int main(void) {

  // num variable
  int num = 10;

  // ptr pointer variable
  int *ptr = NULL;

  // second ptr2 pointer variable
  int **ptr2 = NULL;

  // assigning the address of num to ptr
  ptr = &num;

  // assigning the address of ptr to ptr2
  ptr2 = &ptr;

  // printing the value of num - Output: 10
  printf("num: %d\n", num);
  printf("num via ptr: %d\n", *ptr);
  printf("num via ptr2: %d\n", *(*ptr2));

  // updating the value of num via ptr2
  printf("Updating value of num via ptr2...\n");
  *(*ptr2) = 20;

  // printing the new value of num - Output: 20
  printf("num: %d\n", num);
  printf("num via ptr: %d\n", *ptr);
  printf("num via ptr2: %d\n", *(*ptr2));

  return 0;
}
