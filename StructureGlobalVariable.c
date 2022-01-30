#include <stdio.h>

// creating a student structure template
struct student
{
  char firstname[64];
  char lastname[64];
  char id[64];
  int score;
};
// creating a student structure array variable
  struct student stdArr[3];
// function declaration
void displayDetail();

int main(void)
{
  // other variables
  int i;
  // taking user input
  for (i = 0; i < 1; i++)
    {
    printf("Enter detail of student #%d\n", (i+1));

    printf("Enter First Name: ");
    scanf("%s", stdArr[i].firstname);

    printf("Enter Last Name: ");
    scanf("%s", stdArr[i].lastname);

    printf("Enter ID: ");
    scanf("%s", stdArr[i].id);

    printf("Enter Score: ");
    scanf("%d", &stdArr[i].score);
  }
  return 0;
}
void displayDetail()
{
    for (int i = 0; i < 1; i++)
    {
  printf("Firstname: %s\n", stdArr[i].firstname);
  printf("Lastname: %s\n", stdArr[i].lastname);
  printf("ID: %s\n", stdArr[i].id);
  printf("Score: %d\n", stdArr[i].score);
   }
}


