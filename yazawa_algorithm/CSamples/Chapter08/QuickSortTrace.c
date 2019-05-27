#include <stdio.h>
#define LENGTH 7
#define TRUE -1

// 配列a[head]～a[tail]をグループ分けする関数
int divideArray(int a[], int head, int tail) {
  int left, right, temp;
  printf("divideArray(a, %d, %d)が呼び出されました。\n", head, tail);

  left = head + 1;	// 先頭＋1からたどる位置
  right = tail;		// 末尾からたどる位置

  // 基準値a[head]より小さい要素を前側に、大きい要素を後ろ側に移動する
  while (TRUE) {
    // 配列を先頭＋1から後ろに向かってたどり、
    // 基準値より大きい要素を見つける
    while (left < tail && a[head] > a[left]) {
      left++;
    }

    // 配列を末尾から前に向かってたどり、
    // 基準値より小さい要素を見つける
    while (a[head] < a[right]) {
      right--;
    }

    // チェックする要素がなくなったら終了する
    if (left >= right) {
      break;
    }

    // 基準値より大きいa[left]と、より小さいa[right]を交換する
    temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    // 次の要素のチェックに進む
    left++;
    right--;
  }

  // 基準値a[head]とa[right]を交換する
  temp = a[head];
  a[head] = a[right];
  a[right] = temp;

  // 基準値a[right]の位置を返す
  return right;
}

// 配列a[start]～a[end]を昇順にソートする関数
void sortArray(int a[], int start, int end) {
  printf("sortArray(a, %d, %d)が呼び出されました。\n", start, end);

  int pivot;	// 配列をグループ分けする基準値の位置

  // 配列の要素が2つ以上あるなら処理を行う
  if (start < end) {
    // 基準値との大小関係に応じてグループ分けする
    pivot = divideArray(a, start, end);

    // 基準値より小さい前側のグループに同じ処理を適用する（再帰呼び出し）
    sortArray(a, start, pivot - 1);

    // 基準値より大きい後ろ側のグループに同じ処理を適用する（再帰呼び出し）
    sortArray(a, pivot + 1, end);
  }
}

// 配列の内容を表示する関数
void printArray(int a[], int len) {
  for (int i = 0; i < len; i++) {
    printf("[%d]", a[i]);
  }
  printf("\n");
}

// プログラムの実行開始位置となるmain関数
int main() {
  int a[] = { 4, 7, 1, 6, 2, 5, 3 };

  // ソート前の配列を表示する
  printArray(a, LENGTH);

  // クイックソートする
  sortArray(a, 0, LENGTH - 1);

  // ソート後の配列を表示する
  printArray(a, LENGTH);

  return 0;
}
