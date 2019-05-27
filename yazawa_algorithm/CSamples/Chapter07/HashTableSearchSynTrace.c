#include <stdio.h>
#define LENGTH 10
#define TRUE -1

// �n�b�V���\�̎��̂ƂȂ�z��i�v�f����10�Ƃ���j
int hashTable[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

// �n�b�V���֐�
int hashFunc(int data) {
  return data % 10;
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int data, hashValue;
  int pos;	// �i�[�ʒu�A�T���ʒu

  // �f�[�^���L�[���͂��ăn�b�V���\�Ɋi�[����
  do {
    // �i�[����f�[�^����͂���
    printf("\n�i�[����f�[�^ = ");
    scanf("%d", &data);

    // �}�C�i�X�̒l�����͂��ꂽ��f�[�^�̊i�[���I������
    if (data < 0) {
      break;
    }

    // �n�b�V���l�����߂�
    hashValue = hashFunc(data);
    printf("�n�b�V���l = %d %% 10 = %d\n", data, hashValue);

    // �f�[�^�̊i�[�ʒu�����߂�
    pos = hashValue;
    printf("�i�[�ʒupos = %d\n", pos);
    while (hashTable[pos] != -1) {
      // �i�[�ʒu��1��ɐi�߂�
      pos++;

      // �����𒴂�����擪�ɖ߂�
      if (pos >= LENGTH) {
        pos = 0;
      }
      printf("�i�[�ʒupos = %d\n", pos);

      // �n�b�V���l�̈ʒu�܂Ŗ߂�����A
      // �n�b�V���\����t�Ȃ̂ŁA�J��Ԃ����I������
      if (pos == hashValue) {
        break;
      }
    }

    if (hashTable[pos] == -1) {
      // �n�b�V���\����t�łȂ���΁A�f�[�^���i�[����
      hashTable[pos] = data;
      printf("hashTable[%d]��%d���i�[����B\n", pos, data);
    }
    else {
      // �u�n�b�V���\����t�ł��B�v�ƕ\������
      printf("�n�b�V���\����t�ł��B\n");
    }
  } while (TRUE);

  // �n�b�V���\����f�[�^���T�[�`����
  do {
    // �T�[�`����f�[�^���L�[���͂���
    printf("\n�T�[�`����f�[�^ = ");
    scanf("%d", &data);

    // �}�C�i�X�̒l�����͂��ꂽ��f�[�^�̃T�[�`���I������
    if (data < 0) {
      break;
    }

    // �n�b�V���l�����߂�
    hashValue = hashFunc(data);
    printf("�n�b�V���l = %d %% 10 = %d\n", data, hashValue);

    // �f�[�^���T�[�`����
    pos = hashValue;
    printf("�T���ʒupos = %d\n", pos);
    while (hashTable[pos] != -1 && hashTable[pos] != data) {
      // �T���ʒu��1��ɐi�߂�
      pos++;

      // �����𒴂�����擪�ɖ߂�
      if (pos >= LENGTH) {
        pos = 0;
      }
      printf("�T���ʒupos = %d\n", pos);

      // �|1�������邩�A�܂��́A�n�b�V���l�̈ʒu�܂Ŗ߂�����A
      // �f�[�^��������Ȃ����Ƃ��m��Ȃ̂ŁA�J��Ԃ����I������
      if (hashTable[pos] == -1 || pos == hashValue) {
        break;
      }
    }

    // �T�[�`�������ʂ�\������
    if (hashTable[pos] == data) {
      printf("hashTable[%d]�̒l��%d�Ȃ̂ŁA���������ʒu��\������B\n", pos, data);
      printf("%d�ԖڂɌ�����܂����B\n", pos);
    }
    else {
      printf("hashTable[%d]�̒l��%d�Ȃ̂ŁA�u������܂���B�v�ƕ\������B\n", pos, hashTable[pos]);
      printf("������܂���B\n");
    }
  } while (TRUE);

  return 0;
}
