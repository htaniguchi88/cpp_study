#include <stdio.h>
#define LENGTH 100

// �t�B�{�i�b�`�����L������z��i�ő�100�Ԗڂ܂łƂ���j
int fibonacciNumbers[LENGTH];

// ����n�̃t�B�{�i�b�`����Ԃ��֐�
int fibonacci(int n) {
  int i;

  for (i = 0; i <= n; i++) {
    if (i == 0) {
      // 0�Ԗڂ̃t�B�{�i�b�`��0���L������
      fibonacciNumbers[i] = 0;
    }
    else if (i == 1) {
      // 1�Ԗڂ̃t�B�{�i�b�`��1���L������
      fibonacciNumbers[i] = 1;
    }
    else {
      // ����ȍ~�̃t�B�{�i�b�`�������߂ċL������
      fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i - 2];
    }
  }

  // �t�B�{�i�b�`����Ԃ�
  return fibonacciNumbers[n];
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
