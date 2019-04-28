# include <iostream>
using namespace std;

struct Enemy {
    char name[20];
    int hp;
    int attack;

};

void ShowEnemy(Enemy enemy){
    
    cout << "敵の名前は" << enemy.name << endl;
    cout << "HPは" << enemy.hp << endl;
    cout << "攻撃力は" << enemy.attack << endl;

}

int main() {

    Enemy Kirby = {"カービー", 30, 40};
    ShowEnemy(Kirby);

}
