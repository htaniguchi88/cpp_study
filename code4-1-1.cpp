#include <iostream>
using namespace std;

class Rocket
{
  int fuel, velocity, height;
public:
  Rocket():fuel(100), velocity(0), height(0){}
  Rocket(int a, int b, int c): fuel(a), velocity(b), height(c){}

  int GetF() const {return fuel;}

  void Accel(int b){
    if(b < 0){
        b = 0;
    }
    else if(b > fuel ){
      b = fuel;
    }
    fuel -= b;
    velocity += b;
    height += velocity;
  }
  void Report() const{
    cout << "状況報告" << endl;
    cout << "燃料:" << fuel << endl;
    cout << "速度:" << velocity  << endl;
    cout << "高度" << height << endl;
    cout << endl;
  }
};

int main()
{
  Rocket x;
  int b;
  x.Report();
  cout << "噴射する燃料の量を入力してください:";
  cin >> b;
  x.Accel(b);
  x.Report();
  if(x.GetF()>0){
    cout << "まだ燃料があります。" << endl;
    cout << "もう一度，噴射する燃料の量を入力してください:";
    cin >> b;
    x.Accel(b);
    x.Report();
  }
  cout << "終了" << endl;
};
