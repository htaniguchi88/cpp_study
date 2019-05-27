#include <stdio.h>

// 引数nの階乗を求める関数
int factorial(int n) {
  printf("factorial(%d)が呼び出されました。\n", n);

  if (n == 0) {
    // 0の階乗は1なので、1を返して、再帰呼び出しをやめる
    printf("factorial(0)が戻り値として1を返しました。\n");
    return 1;
  }
  else {
    // nの階乗はn×（n－1）の階乗なので、
    // 再帰呼び出しで（n－1）の階乗を求める
    int retVal = n * factorial(n - 1);
    printf("factorial(%d)が戻り値として%dを返しました。\n", n, retVal);
    return retVal;
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
