#include<stdio.h>
int main()
{
//What is void pointer in C with example?
//A void pointer is a pointer that has no associated data type with it.
//A void pointer can hold address of any type and can be typecasted to any type.
int o = 18;
void *ptr = &o;
printf("%d", *(int *)ptr);


int q[3] = {5,9,7};
void *ptr1 = &q;
ptr1 = ptr1 + sizeof(int);
printf("\n%d", *(int *)ptr1);

int r=17;
float q1=13.8;
char i='c';
void *p;
p=&r;
printf("\n%d",*((int*)p));
p=&q1;
printf("\n%f",*((float*)p));
p=&i;
printf("\n%c",*((char*)p));

return 0;
}
