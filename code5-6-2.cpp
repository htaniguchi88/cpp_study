#include <iostream>
#include <csdtdlib>
#include <ctime>
using namespace std;

class Kougeki
{
    public:
        int energy;
        int pos;
};


class Mao
{
    int energy;
    int pos;
    
    public:
        Mao():energy(100), pos(rand()%10{}
        void Attacked(Kougeki n);
        int GetEnergy() const{return energy; }
};

void Mao::Attacked(Kougeki n){
 if(n.pos == pos0{
         cout << "ぎゃー。命中だ！" << endl;
         energy -= n.energy * 5;
         pos += rand()%3 -1;
 }
 else is(n.pos == pos-1 || n.pos == pos+1){
    cout << "おっと危ない！だかはずれだ。" << endl;
    energy -= n.enegy;
 }
 else{
    cout << "どこをねらっている?まったくのはずれだ。" << endl;
 }
 if(energy <= 0{
     enegy = 0;
     cout << "ああ，やられた！君は英雄だよ。" << endl;
     }
     cout << "魔王の残りエネルギー:" << energy << endl;
 }

class Hero
{
    int energy;
public:
    Hero():energy(50){}
    Kougeki Attack();
    int GetEnergy() const{ return energy;}
};

Kougeki Hero::Attack(){
    Kougeki k;
    cout << endl;
    cout << "正義の力を受けてみよ！" << endl;
    cout << "(攻撃するエネルギーを決めてください。）"
    cout << "(ただし，英雄の残りエネルギーは" <<energy<< "です。)" << endl;
    cin >> k.energy;
    if(k.energy > energy){k.energy = energy;}
    energy -= k.energy;
    cout << "(0から9の半角数字で，攻撃位置を指示してください。)" << endl;
    cin >> k.pos;
    return k;
}

class Game
{
    Mao m;
    Hero h;
    void Ending()const;;
public:
    Game();
    void Play;
};

Game::Game(){
    cout << "これから魔王と戦います。がんばれ！"<< endl;
    cout << "魔王の残りエネルギー:" << m.GetEnergy() << endl;
}

void Game::Ending()const{
    cout << "さあ，ゲームはオシマイです。" << endl;
}

void Game::Play(){
    while(h.GetEnergy()>0{
            if(m.GetEnergy()<=0){
            break;
            }
            m.Attacked(h.Attack());
    }
    if(m.GetEnergy() > 0 {
        cout << "だめだ。魔王は逃げてしまった。" << endl;
    }
    Ending();
}

int main()
{
    srand((unsigned)time(NULL));
    Game g;
    g.Play();
}
