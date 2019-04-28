# include <iostream>
using namespace std;

struct Enemy {

    int hp;
    int attack;

};

void ShowEnemy(Enemy enemy){

    cout << "HPは" << enemy.hp << endl;
    cout << "攻撃力は" << enemy.attack << endl;

}

int main() {

    Enemy Kirby = {30, 40};
    ShowEnemy(Kirby);

}
