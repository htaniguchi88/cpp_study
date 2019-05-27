#include <stdio.h>
#define LENGTH 10

int main() {
  int a[] = { 72, 68, 92, 88, 41, 53, 97, 84, 39, 55 };
  int sum, i;

  sum = 0;
  printf("ループの前：sum = %d\n", sum);

  for (i = 0; i < LENGTH; i++) {
    sum += a[i];
    printf("ループの中：sum = %d,\ti = %d\n", sum, i);
  }

  printf("sum = %d\n", sum);
  printf("ループの後：sum = %d,\ti = %d\n", sum, i);

  return 0;
}
