#include <stdio.h>

void printAverage(int [][3], int, int);

int main(void) {
  // variables
  int
    ROWS = 5,
    COLS = 3;

  int score[5][3] = {
    {60, 70, 80},
    {90, 50, 70},
    {80, 75, 75},
    {90, 85, 81},
    {60, 75, 80}
  };

  printAverage(score, ROWS, COLS);

  return 0;
}

void printAverage(int arr[][3], int rows, int cols) {
  // variables
  int
    r, c;
  float
    sum, avg;

  // find average and print it
  for (r = 0; r < rows; r++) {
    sum = 0;
    for (c = 0; c < cols; c++) {
      sum += arr[r][c];
    }
    avg = sum / cols;
    printf("Average on Day #%d = %f\n", (r + 1), avg);
  }
}

