#include <stdio.h>

int main(void) {

  // student structure
  struct student
  {
    char id[15];
    char firstname[15];
    char lastname[15];
  };

  struct department
  {
    char depid[15];
    char depname[15];
  };

  struct Admin
  {
    struct student std[3];
    struct department dep[3];
  };

  struct Admin a;

  struct Admin b[3];

  struct Admin *ptr=NULL;

  ptr=b;

  for (int i = 0; i < 3; i++)
    {
    printf("\nDetail of student #%d\n", (i + 1));
    printf("\nEnter Student ID\n");
    scanf("%s", a.std[i].id);
    printf("\nEnter Student First Name\n");
    scanf("%s", a.std[i].firstname);
    printf("\nEnter Student Last Name\n");
    scanf("%s", a.std[i].lastname);
    printf("\nEnter Department ID\n");
    scanf("%s", a.dep[i].depid);
    printf("\nEnter Department Name\n");
    scanf("%s", a.dep[i].depname);
    }
    printf("\nResult via Admin\n");
      for (int i = 0; i < 3; i++)
    {
    printf("\nDetail of student #%d\n", (i + 1));
    printf("ID: %s\n", a.std[i].id);
    printf("First Name: %s\n", a.std[i].firstname);
    printf("Last Name: %s\n", a.std[i].lastname);
    printf("Department ID: %s\n", a.dep[i].depid);
    printf("Department Name: %s\n", a.dep[i].depname);
    }


    for (int i = 0; i < 3; i++)
    {
    printf("\nDetail of student using Pointers #%d\n", (i + 1));
    printf("\nEnter Student ID\n");
    scanf("%s", ptr->std[i].id);
    printf("\nEnter Student First Name\n");
    scanf("%s", ptr->std[i].firstname);
    printf("\nEnter Student Last Name\n");
    scanf("%s", ptr->std[i].lastname);
    printf("\nEnter Department ID\n");
    scanf("%s", ptr->dep[i].depid);
    printf("\nEnter Department Name\n");
    scanf("%s", ptr->dep[i].depname);
    ptr++;
    }

    ptr=b;

    printf("\nResult via Admin\n");

      for (int i = 0; i < 3; i++)
    {
    printf("\nDetail of student #%d\n", (i + 1));
    printf("ID: %s\n", ptr->std[i].id);
    printf("First Name: %s\n", ptr->std[i].firstname);
    printf("Last Name: %s\n", ptr->std[i].lastname);
    printf("Department ID: %s\n", ptr->dep[i].depid);
    printf("Department Name: %s\n", ptr->dep[i].depname);
    ptr++;
    }
  return 0;
}
