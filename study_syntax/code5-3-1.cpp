#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Mao
{
  int energy; //privateで変数宣言
  int position;
public:
  Mao():energy(100), position(rand()%10){} //メンバ関数
  void Attacked(int n);
  int GetEnergy() const{ return energy; }
};

void Mao::Attacked(int n){ //メンバ関数の定義
  if(n == position){
    cout << "ぎゃー。命中だ！" << endl;
    energy -= 50;
    position += rand()%3-1;
  }
}

class Hero{
  int energy;
public:
  Hero():energy(50){}
  int Attack();
  int GetEnergy() const{ return energy; }
};

int Hero::Attack(){
  energy -= 10;
  int a;
  cout << endl;
  cout << "正義の力を受けてみよ！" << endl;
  cout << "(0から9の半角数字で，攻撃位置を指示して下さい。)" << endl;
  cin >> a;
  return a;
}

class Game
{
  Mao m;
  Hero h;
public:
  Game();
  void Play();
};

Game::Game(){
  cout << "これから魔王と戦います。頑張れ！" <<endl;
  cout << "魔王の残りエネルギー:" << m.GetEnergy() <<endl;
}

void Game::Play(){
  while(h.GetEnergy() > 0) {
    if(m.GetEnergy() <= 0){
      break;
    }
    m.Attacked(h.Attack());
  }
  if(m.GetEnergy() > 0){
    cout << "だめだ。魔王は逃げてしまった。" << endl;
  }
}


int main()
{
  srand((unsigned)time(NULL));
  Game g;
  g.Play();
}
