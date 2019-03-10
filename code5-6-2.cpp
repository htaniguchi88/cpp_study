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
