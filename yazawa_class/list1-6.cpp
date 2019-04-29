#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
	int number;
	char name[80];
	int salary;
};

int main() {
	struct Employee tanaka;

	//構造体型変数tanakaのメンバに値を代入する
	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 500;

	struct Employee *p;

	//構造体のポインタに構造体の実体のアドレスを代入する
	p = &tanaka;

	//構造体のポインタを使ってメンバを表示する
	cout << p->number << endl;
	cout << p->name << endl;
	cout << p->salary << endl;

	return 0;

}
