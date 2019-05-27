#include <stdio.h>
#include <string.h>
#define LENGTH 10

// StationList�\���̂̒�`
struct StationList {
  char name[20];	// �w��
  int next;		// �|�C���^
};

// �A�����X�g�̎��̂ƂȂ�z��i�v�f�����ő�10�Ƃ���j
struct StationList list[LENGTH];

// �擪�|�C���^
int top;

// ������Ԃ̘A�����X�g���쐬����֐�
void initStationList() {
  // �w���ƃ|�C���^��ݒ肷��
  strcpy(list[0].name, "�V���");
  list[0].next = -1;
  strcpy(list[1].name, "���É�");
  list[1].next = 3;
  strcpy(list[2].name, "����");
  list[2].next = 4;
  strcpy(list[3].name, "���s");
  list[3].next = 0;
  strcpy(list[4].name, "�V���l");
  list[4].next = 1;

  // �擪�|�C���^��ݒ肷��
  top = 2;
}

// �A�����X�g�̗v�f��\������֐�
void printStationList() {
  int idx = top;
  while (idx != -1) {
    printf("[%s]��", list[idx].name);
    idx = list[idx].next;
  }
  printf("\n");
}

// �A�����X�g�ɗv�f��}������֐�
void insertStationList(int insIdx, char insName[], int prevIdx) {
  strcpy(list[insIdx].name, insName);
  list[insIdx].next = list[prevIdx].next;
  list[prevIdx].next = insIdx;
}

// �A�����X�g����v�f���폜����֐�
void deleteStationList(int delIdx, int prevIdx) {
  list[prevIdx].next = list[delIdx].next;
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  // ������Ԃ̘A�����X�g���쐬���ĕ\������
  initStationList();
  printStationList();

  // �A�����X�g�ɗv�f��}�����ĕ\������
  insertStationList(5, "�i��", 2);
  printStationList();

  // �A�����X�g����v�f���폜���ĕ\������
  deleteStationList(5, 2);
  printStationList();

  return 0;
}
