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
    printf("外側のループ：temp ← a[%d] = %d\n", ins, a[ins]);
    temp = a[ins];
    for (cmp = ins - 1; cmp >= 0; cmp--) {
      printf("　内側のループ：ins = %d, cmp = %d, temp = %d\n", 
      ins, cmp, temp);
      if (a[cmp] > temp) {
        a[cmp + 1] = a[cmp];
      }
      else {
        printf("　breakで中断\n");
        break;
      }
    }
    printf("外側のループ：ins = %d, cmp = %d, temp = %d\n", 
    ins, cmp, temp);
    printf("外側のループ：確定した挿入位置 = a[%d] ← temp\n\n", 
    cmp + 1);
    a[cmp + 1] = temp;
  }

  // ソート後の配列の内容を表示する
  printArray(a, LENGTH);

  return 0;
}
