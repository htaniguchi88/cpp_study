#include <stdio.h>
#define KNAP_MAX 6	// ナップサックの耐重量
#define ITEM_NUM 5	// 品物の種類

int main() {
  int totalWeight = 0;	// 重量の合計
  int totalValue = 0;	// 価値の合計

  // 品物の情報（価値の大きい順にソート済み）
  char name[] = { 'E', 'D', 'C', 'B', 'A' };
  int weight[] = { 5, 4, 3, 2, 1 };
  int value[] = { 650, 500, 350, 300, 100};

  // 価値の大きい順に選ぶ
  for (int i = 0; i < ITEM_NUM; i++) {
    if (totalWeight + weight[i] <= KNAP_MAX) {
      printf("品物%cを選ぶ。\n", name[i]);
      totalWeight += weight[i];
      totalValue += value[i];
    }
    else {
      break;
    }
  }

  // 結果を表示する
  printf("重量の合計値 = %dkg\n", totalWeight);
  printf("価値の合計値 = %d円\n", totalValue);

  return 0;
}
