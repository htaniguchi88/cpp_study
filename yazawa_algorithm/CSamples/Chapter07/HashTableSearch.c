#include <stdio.h>
#define LENGTH 10
#define TRUE -1

// �n�b�V���\�̎��̂ƂȂ�z��i�v�f����10�Ƃ���j
int hashTable[LENGTH] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

// �n�b�V���֐�
int hashFunc(int data) {
  return data % 10;
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int data, hashValue;

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

    // �n�b�V���\�Ɋi�[����
    hashTable[hashValue] = data;
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

    // �T�[�`�������ʂ�\������
    if (hashTable[hashValue] == data) {
      printf("%d�ԖڂɌ�����܂����B\n", hashValue);
    }
    else {
      printf("������܂���B\n");
    }
  } while (TRUE);

  return 0;
}

