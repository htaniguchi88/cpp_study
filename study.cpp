#include <iostream>
using namespace std;

int main ()
{
  int x;
  cout << "年齢を入力してください:" ;
  cin >> x;
  cout << "あなたは" << x << "歳なんですね。" << endl;
  if (x >= 20){
    cout << "もっと若く見えますよ" << endl;
  } else {
    cout << "意外と若いんですね。" << endl;
  }
}
