#include <stdio.h>

void displayCities(char [][50], int rows);

int main(void) {
  // variables
  char
    cities[][50] = {
      "Bangalore",
      "Chennai",
      "Kolkata",
      "Mumbai",
      "New Delhi"
    };

  int rows = 5;

  // print the name of the cities
  displayCities(cities, rows);

  return 0;
}

void displayCities(char str[][50], int rows) {
  // variables
  int r, i;

  printf("Cities:\n");
  for (r = 0; r < rows; r++) {
    i = 0;
    while(str[r][i] != '\0') {
      printf("%c", str[r][i]);
      i++;
    }
    printf("\n");
  }
}

