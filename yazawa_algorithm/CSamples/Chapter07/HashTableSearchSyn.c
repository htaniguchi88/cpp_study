#include <stdio.h>
#define LENGTH 10
#define TRUE -1

// ハッシュ表の実体となる配列（要素数を10個とする）
int hashTable[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

// ハッシュ関数
int hashFunc(int data) {
  return data % 10;
}

// プログラムの実行開始位置となるmain関数
int main() {
  int data, hashValue;
  int pos;	// 格納位置、探索位置

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

    // データの格納位置を決める
    pos = hashValue;
    while (hashTable[pos] != -1) {
      // 格納位置を1つ先に進める
      pos++;

      // 末尾を超えたら先頭に戻す
      if (pos >= LENGTH) {
        pos = 0;
      }

      // ハッシュ値の位置まで戻ったら、
      // ハッシュ表が一杯なので、繰り返しを終了する
      if (pos == hashValue) {
        break;
      }
    }

    if (hashTable[pos] == -1) {
      // ハッシュ表が一杯でなければ、データを格納する
      hashTable[pos] = data;
    }
    else {
      // 「ハッシュ表が一杯です。」と表示する
      printf("ハッシュ表が一杯です。\n");
    }
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

    // データをサーチする
    pos = hashValue;
    while (hashTable[pos] != -1 && hashTable[pos] != data) {
      // 探索位置を1つ先に進める
      pos++;

      // 末尾を超えたら先頭に戻す
      if (pos >= LENGTH) {
        pos = 0;
      }

      // －1を見つけるか、または、ハッシュ値の位置まで戻ったら、
      // データが見つからないことが確定なので、繰り返しを終了する
      if (hashTable[pos] == -1 || pos == hashValue) {
        break;
      }
    }

    // サーチした結果を表示する
    if (hashTable[pos] == data) {
      printf("%d番目に見つかりました。\n", pos);
    }
    else {
      printf("見つかりません。\n");
    }
  } while (TRUE);

  return 0;
}
