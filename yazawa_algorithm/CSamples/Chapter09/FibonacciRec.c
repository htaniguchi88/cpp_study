#include <stdio.h>

// 引数nのフィボナッチ数を返す関数
int fibonacci(int n) {
  if (n == 0) {
    // 0番目のフィボナッチ数は0である
    return 0;
  }
  else if (n == 1) {
    // 1番目のフィボナッチ数は1である
    return 1;
  }
  else {
    // それ以降は1つ前と2つ前の数を足した値である
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// プログラムの実行開始位置となるmain関数
int main() {
  int n;

  // 0番目～8番目のフィボナッチ数を表示する
  for (n = 0; n <= 8; n++) {
    printf("%d, ", fibonacci(n));
  }
  printf("\n");

  return 0;
}
