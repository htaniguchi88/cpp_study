#include <stdio.h>
#define LENGTH 100

// �t�B�{�i�b�`�����L������z��i�ő�100�Ԗڂ܂łƂ���j
int fibonacciNumbers[LENGTH];

// �t�B�{�i�b�`�����L������z�������������֐�
void initFibonacciNumbers() {
  int i;

  for (i = 0; i < LENGTH; i++) {
    fibonacciNumbers[i] = -1;
  }
}

// ����n�̃t�B�{�i�b�`����Ԃ��֐�
int fibonacci(int n) {
  int i;

  // �֐����Ă΂ꂽ���Ƃ�\������
  printf("fibonacci(%d)���Ă΂�܂����B\n", n);

  if (fibonacciNumbers[n] == -1) {
    if (n == 0) {
      // 0�Ԗڂ̃t�B�{�i�b�`��0���L������
      fibonacciNumbers[n] = 0;
    }
    else if (n == 1) {
      // 1�Ԗڂ̃t�B�{�i�b�`��1���L������
      fibonacciNumbers[n] = 1;
    }
    else {
      // �ċA�Ăяo���Ńt�B�{�i�b�`�������߂ċL������
      fibonacciNumbers[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
  }

  // �t�B�{�i�b�`����Ԃ�
  return fibonacciNumbers[n];
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int n;

  // �t�B�{�i�b�`�����L������z�������������
  initFibonacciNumbers();

  // 5�Ԗڂ̃t�B�{�i�b�`����\������
  printf("5�Ԗڂ̃t�B�{�i�b�`�� = %d\n", fibonacci(5));

  return 0;
}
