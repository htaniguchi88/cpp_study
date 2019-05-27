#include <stdio.h>
#define LENGTH 10
#define TRUE -1
#define FALSE 0

// BST構造体の定義
struct BST {
  int data;	// 要素の値
  int left;	// 左側の要素にたどるポインタ
  int right;	// 右側の要素にたどるポインタ
};

// 二分探索木の実体となる配列（要素数を最大10個とする）
struct BST tree[LENGTH];

// 根の要素の添え字（連結リストの先頭ポインタ）
int rootIdx = 0;

// 次に格納する要素の添え字
int newIdx = 0;

// 二分探索木に要素を追加する関数
void addBST(int data) {
  int currentIdx;	// 現在たどっている要素の添え字
  int addFlag;		// 追加が完了したことを示すフラグ

  // 物理的な位置に追加する
  tree[newIdx].data = data;
  tree[newIdx].left = -1;
  tree[newIdx].right = -1;

  // 根のデータでないなら、論理的な位置にポインタを設定する
  if (newIdx != rootIdx) {
    currentIdx = rootIdx;	// 根から二分探索木をたどる
    addFlag = FALSE;		// 追加は完了していない

    do {
      // より小さい場合は、左側にたどる
      if (data < tree[currentIdx].data) {
        // 左側が末端なら、そこに追加する
        if (tree[currentIdx].left == -1) {
          tree[currentIdx].left = newIdx;
          addFlag = TRUE;
        }
        // 左側が末端でないなら、さらに左側の要素をたどる
        else {
          currentIdx = tree[currentIdx].left;
        }
      }
      // より大きい場合は、右側にたどる（同じ値はないとする）
      else {
        // 右側が末端なら、そこに追加する
        if (tree[currentIdx].right == -1) {
          tree[currentIdx].right = newIdx;
          addFlag = TRUE;
        }
        // 右側が末端でないなら、さらに右側の要素をたどる
        else {
          currentIdx = tree[currentIdx].right;
        }
      }
    } while (addFlag == FALSE);
  }

  // 次に格納する要素のために添え字を1増やしておく
  newIdx++;
}

// 二分探索木の実体の配列を、物理的な順序で表示する関数
void printPhysicalBST() {
  int i;

  for (i = 0; i < newIdx; i++) {
    printf("tree[%d]：data = %d, left = %d, right = %d\n",
    i, tree[i].data, tree[i].left, tree[i].right);
  }
}

// 二分探索木を論理的な順序（深さ優先探索）で表示する関数
void printLogicalBST(int currentIdx) {
  if (currentIdx != -1) {
    printf("tree[%d]：data = %d, left = %d, right = %d\n",
    currentIdx, tree[currentIdx].data, tree[currentIdx].left, tree[currentIdx].right);

    // この部分が再帰呼び出し
    printLogicalBST(tree[currentIdx].left);
    printLogicalBST(tree[currentIdx].right);
  }
}

// 二分探索木を探索する関数
int searchBST(int x) {
  int idx;		// 見つかった要素の添え字
  int currentIdx;	// 現在たどっている要素の添え字

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

// 再帰呼び出しで二分探索木を探索する関数
int searchRecBST(int x, int currentIdx) {
  if (currentIdx == -1) {
    return -1;
  }
  else {
    if (tree[currentIdx].data == x) {
      return currentIdx;
    }
    else if (tree[currentIdx].data > x) {
      // 再帰呼び出し
      return searchRecBST(x, tree[currentIdx].left);
    }
    else {
      // 再帰呼び出し
      return searchRecBST(x, tree[currentIdx].right);
    }
  }
}

// プログラムの実行開始位置となるmain関数
int main() {
  // 二分探索木を構築して、物理的な順序で表示する
  addBST(4);
  addBST(6);
  addBST(5);
  addBST(2);
  addBST(3);
  addBST(7);
  addBST(1);
  // printPhysicalBST();

  // 二分探索木を論理的な順序（深さ優先探索）で表示する
  // printf("----------------------------------------\n");
  // printLogicalBST(rootIdx);

  // 二分探索木を探索する
  printf("「5」の探索結果 = %d\n", searchBST(5));
  printf("「8」の探索結果 = %d\n", searchBST(8));

  // 再帰呼び出しで二分探索木を探索する
  printf("----------------------------------------\n");
  printf("「5」の探索結果 = %d\n", searchRecBST(5, rootIdx));
  printf("「8」の探索結果 = %d\n", searchRecBST(8, rootIdx));

  return 0;
}
