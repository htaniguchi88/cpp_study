#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Mao
{
  int energy;
  int position;
public:
  Mao():energy(100), position(rand()%10){}
  void Attacked(int n);
  int GetEnergy() const{ return energy; }
};

void Mao::Attacked(int n){
  if(n == position){
    cout << "ぎゃー。命中だ！" << endl;
    energy -= 50;
    position += rand()%3-1;
  }
}

int main()
{
  srand((unsigned)time(NULL));
  Mao m;
  int i, a;
  for (i=0; i<5; i++) {
    if(m.GetEnergy() <= 0){
      break;
    }
    cout << "魔王に攻撃を加えます。" << endl;
    cout << "攻撃位置を入力してください。(0から9の半角数字)" << endl;
    cout << "魔王の残りエネルギー:" << m.GetEnergy() << endl;
    cout << "攻撃回数はあと" << 5-i << "回" << endl;
    cin >> a;
    m.Attacked(a);
  }
}
