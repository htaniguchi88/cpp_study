#include <stdio.h>
#include <string.h>
#define LENGTH 10

// StationList構造体の定義
struct StationList {
  char name[20];	// 駅名
  int next;		// ポインタ
};

// 連結リストの実体となる配列（要素数を最大10個とする）
struct StationList list[LENGTH];

// 先頭ポインタ
int top;

// 初期状態の連結リストを作成する関数
void initStationList() {
  // 駅名とポインタを設定する
  strcpy(list[0].name, "新大阪");
  list[0].next = -1;
  strcpy(list[1].name, "名古屋");
  list[1].next = 3;
  strcpy(list[2].name, "東京");
  list[2].next = 4;
  strcpy(list[3].name, "京都");
  list[3].next = 0;
  strcpy(list[4].name, "新横浜");
  list[4].next = 1;

  // 先頭ポインタを設定する
  top = 2;
}

// 連結リストの要素を表示する関数
void printStationList() {
  int idx = top;
  while (idx != -1) {
    printf("[%s]→", list[idx].name);
    idx = list[idx].next;
  }
  printf("\n");
}

// 連結リストに要素を挿入する関数
void insertStationList(int insIdx, char insName[], int prevIdx) {
  strcpy(list[insIdx].name, insName);
  list[insIdx].next = list[prevIdx].next;
  list[prevIdx].next = insIdx;
}

// 連結リストから要素を削除する関数
void deleteStationList(int delIdx, int prevIdx) {
  list[prevIdx].next = list[delIdx].next;
}

// プログラムの実行開始位置となるmain関数
int main() {
  // 初期状態の連結リストを作成して表示する
  initStationList();
  printStationList();

  // 連結リストに要素を挿入して表示する
  insertStationList(5, "品川", 2);
  printStationList();

  // 連結リストから要素を削除して表示する
  deleteStationList(5, 2);
  printStationList();

  return 0;
}
