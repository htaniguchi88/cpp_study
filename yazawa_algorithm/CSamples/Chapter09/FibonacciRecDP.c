#include <stdio.h>
#define LENGTH 100

// フィボナッチ数を記憶する配列（最大100番目までとする）
int fibonacciNumbers[LENGTH];

// フィボナッチ数を記憶する配列を初期化する関数
void initFibonacciNumbers() {
  int i;

  for (i = 0; i < LENGTH; i++) {
    fibonacciNumbers[i] = -1;
  }
}

// 引数nのフィボナッチ数を返す関数
int fibonacci(int n) {
  int i;

  // 関数が呼ばれたことを表示する
  printf("fibonacci(%d)が呼ばれました。\n", n);

  if (fibonacciNumbers[n] == -1) {
    if (n == 0) {
      // 0番目のフィボナッチ数0を記憶する
      fibonacciNumbers[n] = 0;
    }
    else if (n == 1) {
      // 1番目のフィボナッチ数1を記憶する
      fibonacciNumbers[n] = 1;
    }
    else {
      // 再帰呼び出しでフィボナッチ数を求めて記憶する
      fibonacciNumbers[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
  }

  // フィボナッチ数を返す
  return fibonacciNumbers[n];
}

// プログラムの実行開始位置となるmain関数
int main() {
  int n;

  // フィボナッチ数を記憶する配列を初期化する
  initFibonacciNumbers();

  // 5番目のフィボナッチ数を表示する
  printf("5番目のフィボナッチ数 = %d\n", fibonacci(5));

  return 0;
}
