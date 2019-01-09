#include <iostream>
using namespace std;

class Rocket{ //クラスを宣言
  int fuel; //メンバ変数を宣言
  int velocity;
  int height;

public:
  Rocket(){ //コンストラクタを宣言
    fuel = 100; //メンバ変数に整数値を代入
    velocity = 0;
    height = 0;
  }

  void Accel(int userInput){ //引数にuserInputをとるメンバ関数を宣言
    fuel -= userInput;
    velocity += userInput;
    height += velocity;
  }

  void Report() const{ //引数をとらないメンバ関数を宣言
    cout << "状況報告" << endl;
    cout << "燃料:" << fuel << endl;
    cout << "速度:" << velocity << endl;
    cout << "高度:" << height << endl;
    cout << endl;
  }
};

int main() //メイン関数名でオブジェクト(インスタンス)xを生成，xのメンバ関数を呼び出し
{
  Rocket x;
  cout << "さあ，いよいよロケットが完成しました。。" << endl;
  cout << "操縦するのはあなたです。" << endl;
  cout << "毎回，噴射量を決めてください。" << endl;
  cout << "加速のチャンスは3回だけです。" << endl;
  x.Report();

  int userInput;
  int i;
  for(i=0; i < 3; i++) {
    cout << "噴射量を入力:";
    cin >> userInput;
    x.Accel(userInput);
    x.Report();
  }
}
