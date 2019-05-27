#include <stdio.h>

// �i�b�v�T�b�N�̑Ϗd��
#define KNAP_MAX 6

// �i���̎��
#define ITEM_NUM 5

// �i���̖���
char name[] = { 'A', 'B', 'C', 'D', 'E' };

// �i���̏d��
int weight[] = { 1, 2, 3, 4, 5 };

// �i���̉��l
int value[] = { 100, 300, 350, 500, 650 };

// �i�����ᖡ��������̉��l
int maxValue[ITEM_NUM][KNAP_MAX + 1];

// �Ō�ɓ��ꂽ�i��
int lastItem[KNAP_MAX + 1];

// item�Ԗڂ̕i�����ᖡ��������̃i�b�v�U�b�N�̓��e��\������֐�
void showKnap(int item) {
  int knap;	// 0kg�`6kg�̃i�b�v�T�b�N���w��

  // �ᖡ�����i���̏���\������
  printf("��%c, %dkg, %d�~���ᖡ�������ʁ�\n", name[item], weight[item], value[item]);

  // �i�b�v�T�b�N�̑Ϗd�ʂ�\������
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    printf("%dkg\t", knap);
  }
  printf("\n");

  // �i�b�v�T�b�N�ɋl�߂�ꂽ�i���̉��l�̍��v��\������
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    printf("%d�~\t", maxValue[item][knap]);
  }
  printf("\n");

  // �i�b�v�T�b�N�ɍŌ�ɓ��ꂽ�i����\������
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    if (lastItem[knap] != -1) {
      printf("%c\t", name[lastItem[knap]]);
    }
    else {
      printf("�Ȃ�\t");
    }
  }
  printf("\n\n");
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int item;		// �i���̔ԍ�
  int knap;		// 0kg�`6kg�̃i�b�v�T�b�N���w��
  int selVal;		// ���ɕi����I�񂾏ꍇ�̉��l�̍��v�l
  int totalWeight;	// �d�ʂ̍��v�l

  // 0�Ԗڂ̕i�����ᖡ����
  item = 0;
  // 0kg�`KNAP_MAXkg�̃i�b�v�T�b�N�ŋᖡ����
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    // �Ϗd�ʈȉ��Ȃ�I��
    if (weight[item] <= knap) {
      maxValue[item][knap] = value[item];
      lastItem[knap] = item;
    }
    // �Ϗd�ʈȉ��łȂ��Ȃ�I�΂Ȃ�
    else {
      maxValue[0][knap] = 0;
      lastItem[knap] = -1;
    }
  }
  showKnap(item);

  // 1�Ԗځ`ITEM_NUM-1�Ԗڂ̕i�����ᖡ����
  for (item = 1; item < ITEM_NUM; item++) {
    // 0kg�`KNAP_MAXkg�̃i�b�v�T�b�N�ŋᖡ����
    for (knap = 0; knap <= KNAP_MAX; knap++) {
      // �Ϗd�ʈȉ��̏ꍇ
      if (weight[item] <= knap) {
        // �I�񂾏ꍇ�̉��l�����߂Ă݂�
        selVal = maxValue[item - 1][knap - weight[item]] + value[item];
        // ���l���傫���Ȃ�Ȃ�I��
        if (selVal > maxValue[item - 1][knap]) {
          maxValue[item][knap] = selVal;
          lastItem[knap] = item;
        }
        // ���l���傫���Ȃ�Ȃ��Ȃ�I�΂Ȃ�
        else {
          maxValue[item][knap] = maxValue[item - 1][knap];
        }
      }
      // �Ϗd�ʈȉ��łȂ��Ȃ�I�΂Ȃ�
      else {
        maxValue[item][knap] = maxValue[item - 1][knap];
      }
    }
    showKnap(item);
  }

  // �i�b�v�T�b�N�ɓ����Ă���i���𒲂ׂāA����\������
  printf("���i�b�v�T�b�N�ɓ����Ă���i���𒲂ׂ遄\n");
  totalWeight = 0;
  for (knap = KNAP_MAX; knap > 0; knap -= weight[item]) {
    item = lastItem[knap];
    printf("%dkg�̃i�b�v�T�b�N�ɍŌ�ɓ��ꂽ�i����%c�ł��B\n", knap, name[item]);
    totalWeight += weight[item];
    printf("�@%c, %dkg, %d�~\n", name[item], weight[item], value[item]);
    printf("�@%dkg - %dkg = %dkg�ł��B\n", knap, weight[item], knap - weight[item]);
  }
  printf("\n������\�����遄\n");
  printf("�d�ʂ̍��v�l = %dkg\n", totalWeight);
  printf("���l�̍ő�l = %d�~\n", maxValue[ITEM_NUM - 1][KNAP_MAX]);

  return 0;
}
