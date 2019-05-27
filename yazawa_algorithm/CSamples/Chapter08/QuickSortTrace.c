#include <stdio.h>
#define LENGTH 7
#define TRUE -1

// �z��a[head]�`a[tail]���O���[�v��������֐�
int divideArray(int a[], int head, int tail) {
  int left, right, temp;
  printf("divideArray(a, %d, %d)���Ăяo����܂����B\n", head, tail);

  left = head + 1;	// �擪�{1���炽�ǂ�ʒu
  right = tail;		// �������炽�ǂ�ʒu

  // ��la[head]��菬�����v�f��O���ɁA�傫���v�f����둤�Ɉړ�����
  while (TRUE) {
    // �z���擪�{1������Ɍ������Ă��ǂ�A
    // ��l���傫���v�f��������
    while (left < tail && a[head] > a[left]) {
      left++;
    }

    // �z��𖖔�����O�Ɍ������Ă��ǂ�A
    // ��l��菬�����v�f��������
    while (a[head] < a[right]) {
      right--;
    }

    // �`�F�b�N����v�f���Ȃ��Ȃ�����I������
    if (left >= right) {
      break;
    }

    // ��l���傫��a[left]�ƁA��菬����a[right]����������
    temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    // ���̗v�f�̃`�F�b�N�ɐi��
    left++;
    right--;
  }

  // ��la[head]��a[right]����������
  temp = a[head];
  a[head] = a[right];
  a[right] = temp;

  // ��la[right]�̈ʒu��Ԃ�
  return right;
}

// �z��a[start]�`a[end]�������Ƀ\�[�g����֐�
void sortArray(int a[], int start, int end) {
  printf("sortArray(a, %d, %d)���Ăяo����܂����B\n", start, end);

  int pivot;	// �z����O���[�v���������l�̈ʒu

  // �z��̗v�f��2�ȏ゠��Ȃ珈�����s��
  if (start < end) {
    // ��l�Ƃ̑召�֌W�ɉ����ăO���[�v��������
    pivot = divideArray(a, start, end);

    // ��l��菬�����O���̃O���[�v�ɓ���������K�p����i�ċA�Ăяo���j
    sortArray(a, start, pivot - 1);

    // ��l���傫����둤�̃O���[�v�ɓ���������K�p����i�ċA�Ăяo���j
    sortArray(a, pivot + 1, end);
  }
}

// �z��̓��e��\������֐�
void printArray(int a[], int len) {
  for (int i = 0; i < len; i++) {
    printf("[%d]", a[i]);
  }
  printf("\n");
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int a[] = { 4, 7, 1, 6, 2, 5, 3 };

  // �\�[�g�O�̔z���\������
  printArray(a, LENGTH);

  // �N�C�b�N�\�[�g����
  sortArray(a, 0, LENGTH - 1);

  // �\�[�g��̔z���\������
  printArray(a, LENGTH);

  return 0;
}
