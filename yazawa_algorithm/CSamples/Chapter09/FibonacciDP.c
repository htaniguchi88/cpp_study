#include <stdio.h>
#define LENGTH 100

// フィボナッチ数を記憶する配列（最大100番目までとする）
int fibonacciNumbers[LENGTH];

// 引数nのフィボナッチ数を返す関数
int fibonacci(int n) {
  int i;

  for (i = 0; i <= n; i++) {
    if (i == 0) {
      // 0番目のフィボナッチ数0を記憶する
      fibonacciNumbers[i] = 0;
    }
    else if (i == 1) {
      // 1番目のフィボナッチ数1を記憶する
      fibonacciNumbers[i] = 1;
    }
    else {
      // それ以降のフィボナッチ数を求めて記憶する
      fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i - 2];
    }
  }

  // フィボナッチ数を返す
  return fibonacciNumbers[n];
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
