#include <stdio.h>

// ナップサックの耐重量
#define KNAP_MAX 6

// 品物の種類
#define ITEM_NUM 5

// 品物の名称
char name[] = { 'A', 'B', 'C', 'D', 'E' };

// 品物の重量
int weight[] = { 1, 2, 3, 4, 5 };

// 品物の価値
int value[] = { 100, 300, 350, 500, 650 };

// 品物を吟味した直後の価値
int maxValue[ITEM_NUM][KNAP_MAX + 1];

// 最後に入れた品物
int lastItem[KNAP_MAX + 1];

// item番目の品物を吟味した直後のナップザックの内容を表示する関数
void showKnap(int item) {
  int knap;	// 0kg～6kgのナップサックを指す

  // 吟味した品物の情報を表示する
  printf("＜%c, %dkg, %d円を吟味した結果＞\n", name[item], weight[item], value[item]);

  // ナップサックの耐重量を表示する
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    printf("%dkg\t", knap);
  }
  printf("\n");

  // ナップサックに詰められた品物の価値の合計を表示する
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    printf("%d円\t", maxValue[item][knap]);
  }
  printf("\n");

  // ナップサックに最後に入れた品物を表示する
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    if (lastItem[knap] != -1) {
      printf("%c\t", name[lastItem[knap]]);
    }
    else {
      printf("なし\t");
    }
  }
  printf("\n\n");
}

// プログラムの実行開始位置となるmain関数
int main() {
  int item;		// 品物の番号
  int knap;		// 0kg～6kgのナップサックを指す
  int selVal;		// 仮に品物を選んだ場合の価値の合計値
  int totalWeight;	// 重量の合計値

  // 0番目の品物を吟味する
  item = 0;
  // 0kg～KNAP_MAXkgのナップサックで吟味する
  for (knap = 0; knap <= KNAP_MAX; knap++) {
    // 耐重量以下なら選ぶ
    if (weight[item] <= knap) {
      maxValue[item][knap] = value[item];
      lastItem[knap] = item;
    }
    // 耐重量以下でないなら選ばない
    else {
      maxValue[0][knap] = 0;
      lastItem[knap] = -1;
    }
  }
  showKnap(item);

  // 1番目～ITEM_NUM-1番目の品物を吟味する
  for (item = 1; item < ITEM_NUM; item++) {
    // 0kg～KNAP_MAXkgのナップサックで吟味する
    for (knap = 0; knap <= KNAP_MAX; knap++) {
      // 耐重量以下の場合
      if (weight[item] <= knap) {
        // 選んだ場合の価値を求めてみる
        selVal = maxValue[item - 1][knap - weight[item]] + value[item];
        // 価値が大きくなるなら選ぶ
        if (selVal > maxValue[item - 1][knap]) {
          maxValue[item][knap] = selVal;
          lastItem[knap] = item;
        }
        // 価値が大きくならないなら選ばない
        else {
          maxValue[item][knap] = maxValue[item - 1][knap];
        }
      }
      // 耐重量以下でないなら選ばない
      else {
        maxValue[item][knap] = maxValue[item - 1][knap];
      }
    }
    showKnap(item);
  }

  // ナップサックに入っている品物を調べて、解を表示する
  printf("＜ナップサックに入っている品物を調べる＞\n");
  totalWeight = 0;
  for (knap = KNAP_MAX; knap > 0; knap -= weight[item]) {
    item = lastItem[knap];
    printf("%dkgのナップサックに最後に入れた品物は%cです。\n", knap, name[item]);
    totalWeight += weight[item];
    printf("　%c, %dkg, %d円\n", name[item], weight[item], value[item]);
    printf("　%dkg - %dkg = %dkgです。\n", knap, weight[item], knap - weight[item]);
  }
  printf("\n＜解を表示する＞\n");
  printf("重量の合計値 = %dkg\n", totalWeight);
  printf("価値の最大値 = %d円\n", maxValue[ITEM_NUM - 1][KNAP_MAX]);

  return 0;
}
