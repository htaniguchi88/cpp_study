#include <stdio.h>
#define LENGTH 10
#define TRUE -1
#define FALSE 0

// BST�\���̂̒�`
struct BST {
  int data;	// �v�f�̒l
  int left;	// �����̗v�f�ɂ��ǂ�|�C���^
  int right;	// �E���̗v�f�ɂ��ǂ�|�C���^
};

// �񕪒T���؂̎��̂ƂȂ�z��i�v�f�����ő�10�Ƃ���j
struct BST tree[LENGTH];

// ���̗v�f�̓Y�����i�A�����X�g�̐擪�|�C���^�j
int rootIdx = 0;

// ���Ɋi�[����v�f�̓Y����
int newIdx = 0;

// �񕪒T���؂ɗv�f��ǉ�����֐�
void addBST(int data) {
  int currentIdx;	// ���݂��ǂ��Ă���v�f�̓Y����
  int addFlag;		// �ǉ��������������Ƃ������t���O

  // �����I�Ȉʒu�ɒǉ�����
  tree[newIdx].data = data;
  tree[newIdx].left = -1;
  tree[newIdx].right = -1;

  // ���̃f�[�^�łȂ��Ȃ�A�_���I�Ȉʒu�Ƀ|�C���^��ݒ肷��
  if (newIdx != rootIdx) {
    currentIdx = rootIdx;	// ������񕪒T���؂����ǂ�
    addFlag = FALSE;		// �ǉ��͊������Ă��Ȃ�

    do {
      // ��菬�����ꍇ�́A�����ɂ��ǂ�
      if (data < tree[currentIdx].data) {
        // ���������[�Ȃ�A�����ɒǉ�����
        if (tree[currentIdx].left == -1) {
          tree[currentIdx].left = newIdx;
          addFlag = TRUE;
        }
        // ���������[�łȂ��Ȃ�A����ɍ����̗v�f�����ǂ�
        else {
          currentIdx = tree[currentIdx].left;
        }
      }
      // ���傫���ꍇ�́A�E���ɂ��ǂ�i�����l�͂Ȃ��Ƃ���j
      else {
        // �E�������[�Ȃ�A�����ɒǉ�����
        if (tree[currentIdx].right == -1) {
          tree[currentIdx].right = newIdx;
          addFlag = TRUE;
        }
        // �E�������[�łȂ��Ȃ�A����ɉE���̗v�f�����ǂ�
        else {
          currentIdx = tree[currentIdx].right;
        }
      }
    } while (addFlag == FALSE);
  }

  // ���Ɋi�[����v�f�̂��߂ɓY������1���₵�Ă���
  newIdx++;
}

// �񕪒T���؂̎��̂̔z����A�����I�ȏ����ŕ\������֐�
void printPhysicalBST() {
  int i;

  for (i = 0; i < newIdx; i++) {
    printf("tree[%d]�Fdata = %d, left = %d, right = %d\n",
    i, tree[i].data, tree[i].left, tree[i].right);
  }
}

// �񕪒T���؂�_���I�ȏ����i�[���D��T���j�ŕ\������֐�
void printLogicalBST(int currentIdx) {
  if (currentIdx != -1) {
    printf("tree[%d]�Fdata = %d, left = %d, right = %d\n",
    currentIdx, tree[currentIdx].data, tree[currentIdx].left, tree[currentIdx].right);

    // ���̕������ċA�Ăяo��
    printLogicalBST(tree[currentIdx].left);
    printLogicalBST(tree[currentIdx].right);
  }
}

// �񕪒T���؂�T������֐�
int searchBST(int x) {
  int idx;		// ���������v�f�̓Y����
  int currentIdx;	// ���݂��ǂ��Ă���v�f�̓Y����

  idx = -1;
  currentIdx = rootIdx;
  while (currentIdx != -1) {
    if (tree[currentIdx].data == x) {
      idx = currentIdx;
      break;
    }
    else if (tree[currentIdx].data > x) {
      currentIdx = tree[currentIdx].left;
    }
    else {
      currentIdx = tree[currentIdx].right;
    }
  }

  return idx;
}

// �ċA�Ăяo���œ񕪒T���؂�T������֐�
int searchRecBST(int x, int currentIdx) {
  if (currentIdx == -1) {
    return -1;
  }
  else {
    if (tree[currentIdx].data == x) {
      return currentIdx;
    }
    else if (tree[currentIdx].data > x) {
      // �ċA�Ăяo��
      return searchRecBST(x, tree[currentIdx].left);
    }
    else {
      // �ċA�Ăяo��
      return searchRecBST(x, tree[currentIdx].right);
    }
  }
}

// �v���O�����̎��s�J�n�ʒu�ƂȂ�main�֐�
int main() {
  // �񕪒T���؂��\�z���āA�����I�ȏ����ŕ\������
  addBST(4);
  addBST(6);
  addBST(5);
  addBST(2);
  addBST(3);
  addBST(7);
  addBST(1);
  // printPhysicalBST();

  // �񕪒T���؂�_���I�ȏ����i�[���D��T���j�ŕ\������
  // printf("----------------------------------------\n");
  // printLogicalBST(rootIdx);

  // �񕪒T���؂�T������
  printf("�u5�v�̒T������ = %d\n", searchBST(5));
  printf("�u8�v�̒T������ = %d\n", searchBST(8));

  // �ċA�Ăяo���œ񕪒T���؂�T������
  printf("----------------------------------------\n");
  printf("�u5�v�̒T������ = %d\n", searchRecBST(5, rootIdx));
  printf("�u8�v�̒T������ = %d\n", searchRecBST(8, rootIdx));

  return 0;
}
