#include <stdio.h>
#define LENGTH 10
#define TRUE -1

// ハッシュ表の実体となる配列（要素数を10個とする）
int hashTable[LENGTH] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

// ハッシュ関数
int hashFunc(int data) {
  return data % 10;
}

// プログラムの実行開始位置となるmain関数
int main() {
  int data, hashValue;

  // データをキー入力してハッシュ表に格納する
  do {
    // 格納するデータを入力する
    printf("\n格納するデータ = ");
    scanf("%d", &data);

    // マイナスの値が入力されたらデータの格納を終了する
    if (data < 0) {
      break;
    }

    // ハッシュ値を求める
    hashValue = hashFunc(data);

    // ハッシュ表に格納する
    hashTable[hashValue] = data;
  } while (TRUE);

  // ハッシュ表からデータをサーチする
  do {
    // サーチするデータをキー入力する
    printf("\nサーチするデータ = ");
    scanf("%d", &data);

    // マイナスの値が入力されたらデータのサーチを終了する
    if (data < 0) {
      break;
    }

    // ハッシュ値を求める
    hashValue = hashFunc(data);

    // サーチした結果を表示する
    if (hashTable[hashValue] == data) {
      printf("%d番目に見つかりました。\n", hashValue);
    }
    else {
      printf("見つかりません。\n");
    }
  } while (TRUE);

  return 0;
}

