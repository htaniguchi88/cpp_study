#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KNAP_MAX 6		// �i�b�v�T�b�N�̑Ϗd��
#define ITEM_NUM 5		// �i���̎��

#define IND_NUM 8		// �̂̐�
#define MUTATE_RATE 0.1		// �ˑR�ψق���m���i10���j

char itemName[] = { 'A', 'B', 'C', 'D', 'E' };	// �i���̖���
int itemWeight[] = { 1, 2, 3, 4, 5 };		// �i���̏d��
int itemValue[] = { 100, 300, 350, 500, 650 };	// �i���̉��l

int indGeneration;		// �̂̐���
int indGene[IND_NUM][ITEM_NUM];	// �̂̈�`�q
int indWeight[IND_NUM];		// �̂̏d��
int indValue[IND_NUM];		// �̂̉��l
int indFitness[IND_NUM];	// �̂̓K���x

// �̂������_���ɐ�������֐�
void createIndividual() {
  int ind, item;	// ���[�v�J�E���^

  // 0��1�������_���Ɋi�[����
  for (ind = 0; ind < IND_NUM; ind++) {
    for (item = 0; item < ITEM_NUM; item++) {
      indGene[ind][item] = rand() % 2;
    }
  }
}

// �̂̏d�ʁA���l�A�K���x���v�Z����֐�
void calcIndividual() {
  int ind, item;	// ���[�v�J�E���^

  for (ind = 0; ind < IND_NUM; ind++) {
    // �d�ʂƉ��l���v�Z����
    indWeight[ind] = 0;
    indValue[ind] = 0;
    for (item = 0; item < ITEM_NUM; item++) {
      if (indGene[ind][item] == 1) {
        indWeight[ind] += itemWeight[item];
        indValue[ind] += itemValue[item];
      }
    }

    // �K���x���v�Z����
    if (indWeight[ind] <= KNAP_MAX) {
      // �Ϗd�ʈȉ��Ȃ�A���l�����̂܂ܓK���x�Ƃ���
      indFitness[ind] = indValue[ind];
    }
    else {
      // �Ϗd�ʂ𒴂��Ă���Ȃ�A�K���x��0�Ƃ���
      indFitness[ind] = 0;
    }
  }
}

// �̂̏���\������֐�
void showIndividual() {
  int ind, item;	// ���[�v�J�E���^

  // �����\������
  printf("\n����%d���い\n", indGeneration);

  // ��`�q�A�d�ʁA���l�A�K���x��\������
  printf("��`�q\t\t�d��\t���l\t�K���x\n");
  for (ind = 0; ind < IND_NUM; ind++) {
    for (item = 0; item < ITEM_NUM; item++) {
      printf("[%d]", indGene[ind][item]);
    }
    printf("\t%2dkg\t%4d�~\t%4d\n", indWeight[ind], indValue[ind], indFitness[ind]);
  }
  printf("\n");
}

// �̂�K���x�̑傫�����Ƀ\�[�g����֐�
void sortIndividual() {
  int pos;	// �}������v�f
  int ins;	// �}������ʒu
  int item;	// ���[�v�J�E���^
  int tmp;	// �ꎞ�I�ɒl�𓦂����ϐ�

  // �}���@�Ń\�[�g����
  for (pos = 1; pos < IND_NUM; pos++) {
    ins = pos;
    while (ins >= 1 && indFitness[ins - 1] < indFitness[ins]) {
      for (item = 0; item < ITEM_NUM; item++) {
        tmp = indGene[ins - 1][item];
        indGene[ins - 1][item] = indGene[ins][item];
        indGene[ins][item] = tmp;
      }

      tmp = indWeight[ins - 1];
      indWeight[ins - 1] = indWeight[ins];
      indWeight[ins] = tmp;

      tmp =  indValue[ins - 1];
      indValue[ins - 1] = indValue[ins];
      indValue[ins] = tmp;

      tmp = indFitness[ins - 1];
      indFitness[ins - 1] = indFitness[ins];
      indFitness[ins] = tmp;

      ins--;
    }
  }
}

// ��������֐�
void selectIndividual() {
  int ind, item;	// ���[�v�J�E���^

  // �K���x�̏��50��������50���ɃR�s�[����i����50���𓑑�����j
  for (ind = 0; ind < IND_NUM / 2; ind++) {
    for (item = 0; item < ITEM_NUM; item++) {
      indGene[ind + IND_NUM / 2][item] = indGene[ind][item];
    }
  }
  printf("����50���𓑑����܂����B\n");
}

// ��������֐�
void crossoverIndividual() {
  int ind, item;	// ���[�v�J�E���^
  int crossoverPoint;	// ��������ʒu
  int tmp;		// �ꎞ�I�ɒl�𓦂����ϐ�

  // ����50���ɃR�s�[�����̂�ΏۂƂ���
  for (ind = IND_NUM / 2; ind < (IND_NUM - 1); ind += 2) {
    // ��������ʒu�������_���Ɍ��߂�
    crossoverPoint = rand() % (ITEM_NUM - 1) + 1;
    for (item = crossoverPoint; item < ITEM_NUM; item++) {
      // �ׂ̌̂ƌ�������
      tmp = indGene[ind][item];
      indGene[ind][item] = indGene[ind + 1][item];
      indGene[ind + 1][item] = tmp;
    }
    printf("��%d�ƌ�%d��%d�̈ʒu�Ō������܂����B\n", ind, ind + 1, crossoverPoint);
  }
}

// �ˑR�ψق���֐�
void mutateIndividual() {
  int ind, item;	// ���[�v�J�E���^

  // ����50���ɃR�s�[�����̂�ΏۂƂ���
  for (ind = IND_NUM / 2; ind < IND_NUM; ind++) {
    for (item = 0; item < ITEM_NUM; item++) {
      // ���炩���ߌ��߂�ꂽ�m���œˑR�ψق���
      if (rand() / (double)RAND_MAX <= MUTATE_RATE) {
        // ���]����
        indGene[ind][item] ^= 1;
        printf("��%d��%d�̈ʒu�œˑR�ψق��܂����B\n", ind, item);
      }
    }
  }
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  int genMax;	// �ő�̐���
  int item;	// ���[�v�J�E���^

  // �����̎��ݒ肷��
  srand((unsigned int)time(NULL));

  // �ő�̐�����L�[���͂���
  printf("�ő�̐��� = ");
  scanf("%d", &genMax);

  // ��1����̌̂𐶐�����
  indGeneration = 1;
  createIndividual();

  // �K���x���v�Z����
  calcIndividual();

  // �K���x���傫�����Ƀ\�[�g����
  sortIndividual();

  // �̂�\������
  showIndividual();

  // 1���ジ�i��������
  indGeneration++;
  while (indGeneration <= genMax) {
    // �K���x���傫�����Ƀ\�[�g����
    sortIndividual();

    // ��������
    selectIndividual();

    // ��������
    crossoverIndividual();

    // �ˑR�ψق���
    mutateIndividual();

    // �K���x���v�Z����
    calcIndividual();

    // �K���x���傫�����Ƀ\�[�g����
    sortIndividual();

    // �̂�\������
    showIndividual();

    // �����i�߂�
    indGeneration++;
  }

  // �ł��K���x�̍����̂����Ƃ��ĕ\������
  printf("���i�b�v�T�b�N�ɓ����Ă���i����\�����遄\n");
  for (item = 0; item < ITEM_NUM; item++) {
    if (indGene[0][item] == 1) {
      printf("%c, %dkg, %d�~\n", itemName[item], itemWeight[item], itemValue[item]);
    }
  }
  printf("\n������\�����遄\n");
  printf("�d�ʂ̍��v�l = %dkg\n", indWeight[0]);
  printf("���l�̍ő�l = %d�~\n", indValue[0]);

  return 0;
}
