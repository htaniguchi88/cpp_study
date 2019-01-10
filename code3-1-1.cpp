#include <iostream>
using namespace std;

class Rocket{ //クラスを宣言
  int fuel; //メンバ変数を宣言
  int velocity;
  int height;

public:
  Rocket(){ //コンストラクタを定義
    fuel = 100; //メンバ変数に整数値を代入
    velocity = 0;
    height = 0;
  }

  Rocket(int a, int b , int c){
    fuel = a;
    velocity = b;
    height = c;
  }

  void Accel(int userInput){ //引数にuserInputをとるメンバ関数を定義
    fuel -= userInput;
    velocity += userInput;
    height += velocity;
  }

  void Report() const{ //引数をとらないメンバ関数を定義
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
  Rocket y(200, 10, 5);

  x.Report();
  y.Report();

}
