#include <stdio.h>
struct date
{
unsigned int day, month, year;
};
int main()
{

struct date d = {12, 11, 2020}; // Here d is an object of the structure time

printf("Welcome to Structures!\n\n");

printf("The Date is %d / %d / %d\n", d.day, d.month, d.year);
return 0;
}
