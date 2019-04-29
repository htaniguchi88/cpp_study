#include <cstring>
#include <iostream>
using namespace std;

struct Employee  { //Employee型の構造体宣言
    int number;
    char name[80];
    int salary;
    char hobby[80];
};

int main() {
    struct Employee person[10]; //Employee型の配列変数person

    person[0].number = 1234;
    strcpy(person[0].name, "田中一郎");
    person[0].salary = 200000;
    strcpy(person[0].hobby, "野球観戦");

    person[1].number = 1235;
    strcpy(person[1].name, "佐藤次郎");
    person[1].salary = 250000;
    strcpy(person[1].hobby, "ラーメン屋めぐり");

    person[2].number = 1236;
    strcpy(person[2].name, "鈴木三郎");
    person[2].salary = 300000;
    strcpy(person[2].hobby, "陶芸");

    for (int i = 0; i < 3 ; i++) {
        cout << person[i].number << endl;
        cout << person[i].name << endl;
        cout << person[i].salary << endl;
        cout << person[i].hobby << endl;
    }

    return 0;
}
