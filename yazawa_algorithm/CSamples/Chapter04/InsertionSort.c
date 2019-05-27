#include <stdio.h>
#define LENGTH 5

void printArray(int a[], int len) {
  for (int i = 0; i < len; i++) {
    printf("[%d]", a[i]);
  }
  printf("\n");
}

int main() {
  int a[] = { 90, 34, 78, 12, 56 };
  int ins, cmp, temp;

  // ソート前の配列の内容を表示する
  printArray(a, LENGTH);

  // 挿入法で昇順にソートする
  for (ins = 1; ins < LENGTH; ins++) {
    temp = a[ins];
    for (cmp = ins - 1; cmp >= 0; cmp--) {
      if (a[cmp] > temp) {
        a[cmp + 1] = a[cmp];
      }
      else {
        break;
      }
    }
    a[cmp + 1] = temp;
  }

  // ソート後の配列の内容を表示する
  printArray(a, LENGTH);

  return 0;
}
