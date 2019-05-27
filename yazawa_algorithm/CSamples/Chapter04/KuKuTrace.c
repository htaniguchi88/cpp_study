#include <stdio.h>

int main() {
  int step, num;

  for (step = 1; step <= 9; step++) {
    // printf("%d‚Ì’i", step);
    for (num = 1; num <= 9; num++) {
      // printf("\t%2d", step * num);
      printf("step = %d, num = %d, step ~ num = %d\n", 
      step, num, step * num);
    }
    // printf("\n");
  }

  return 0;
}
