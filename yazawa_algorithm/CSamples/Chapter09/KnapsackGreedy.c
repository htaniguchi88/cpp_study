#include <stdio.h>
#define KNAP_MAX 6	// �i�b�v�T�b�N�̑Ϗd��
#define ITEM_NUM 5	// �i���̎��

int main() {
  int totalWeight = 0;	// �d�ʂ̍��v
  int totalValue = 0;	// ���l�̍��v

  // �i���̏��i���l�̑傫�����Ƀ\�[�g�ς݁j
  char name[] = { 'E', 'D', 'C', 'B', 'A' };
  int weight[] = { 5, 4, 3, 2, 1 };
  int value[] = { 650, 500, 350, 300, 100};

  // ���l�̑傫�����ɑI��
  for (int i = 0; i < ITEM_NUM; i++) {
    if (totalWeight + weight[i] <= KNAP_MAX) {
      printf("�i��%c��I�ԁB\n", name[i]);
      totalWeight += weight[i];
      totalValue += value[i];
    }
    else {
      break;
    }
  }

  // ���ʂ�\������
  printf("�d�ʂ̍��v�l = %dkg\n", totalWeight);
  printf("���l�̍��v�l = %d�~\n", totalValue);

  return 0;
}
