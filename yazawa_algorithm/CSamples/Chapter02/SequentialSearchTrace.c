#include <stdio.h>
#define LENGTH 10

int main() {
  int a[] = { 72, 68, 92, 88, 41, 53, 97, 84, 39, 55 };
  int x, pos, i;

  printf("x = ");
  scanf("%d", &x);
  pos = -1;
  printf("���[�v�̑O�Fx = %d\n", x);
  printf("���[�v�̑O�Fpos = %d\n", pos);

  for (i = 0; i < LENGTH && pos == -1; i++) {
    if (a[i] == x) {
      pos = i;
    }
    printf("���[�v�̒��Fpos = %d,\ti = %d\n", pos, i);
  }

  printf("pos = %d\n", pos);
  printf("���[�v�̌�Fpos = %d,\ti = %d\n", pos, i);

  return 0;
}
