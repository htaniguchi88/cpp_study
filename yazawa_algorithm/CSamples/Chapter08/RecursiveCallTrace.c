#include <stdio.h>

// ����n�̊K������߂�֐�
int factorial(int n) {
  printf("factorial(%d)���Ăяo����܂����B\n", n);

  if (n == 0) {
    // 0�̊K���1�Ȃ̂ŁA1��Ԃ��āA�ċA�Ăяo������߂�
    printf("factorial(0)���߂�l�Ƃ���1��Ԃ��܂����B\n");
    return 1;
  }
  else {
    // n�̊K���n�~�in�|1�j�̊K��Ȃ̂ŁA
    // �ċA�Ăяo���Łin�|1�j�̊K������߂�
    int retVal = n * factorial(n - 1);
    printf("factorial(%d)���߂�l�Ƃ���%d��Ԃ��܂����B\n", n, retVal);
    return retVal;
  }
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int ans;

  // 5�̊K������߂�
  ans = factorial(5);
  printf("%d\n", ans);

  return 0;
}
