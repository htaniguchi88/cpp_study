#include <stdio.h>

// ����n�̃t�B�{�i�b�`����Ԃ��֐�
int fibonacci(int n) {
  if (n == 0) {
    // 0�Ԗڂ̃t�B�{�i�b�`����0�ł���
    return 0;
  }
  else if (n == 1) {
    // 1�Ԗڂ̃t�B�{�i�b�`����1�ł���
    return 1;
  }
  else {
    // ����ȍ~��1�O��2�O�̐��𑫂����l�ł���
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int n;

  // 0�Ԗځ`8�Ԗڂ̃t�B�{�i�b�`����\������
  for (n = 0; n <= 8; n++) {
    printf("%d, ", fibonacci(n));
  }
  printf("\n");

  return 0;
}
