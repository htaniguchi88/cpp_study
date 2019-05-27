#include <stdio.h>

// 引数nの階乗を求める関数
int factorial(int n) {
  if (n == 0) {
    // 0の階乗は1なので、1を返して、再帰呼び出しをやめる
    return 1;
  }
  else {
    // nの階乗はn×（n－1）の階乗なので、
    // 再帰呼び出しで（n－1）の階乗を求める
    return n * factorial(n - 1);
  }
}

// プログラムの実行開始位置となるmain関数
int main() {
  int ans;

  // 5の階乗を求める
  ans = factorial(5);
  printf("%d\n", ans);

  return 0;
}
