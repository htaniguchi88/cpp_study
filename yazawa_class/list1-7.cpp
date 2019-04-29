#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
	int number;
	char name[80];
	int salary;
};

//関数のプロトタイプ宣言
void showEmployee(struct Employee *p);

int main() {
	struct Employee tanaka;

	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 3500;

	//構造体型の変数tanakaを引数として関数に渡す
	showEmployee(&tanaka);

	return 0;
}

void showEmployee(struct Employee *p) {
	cout << p->number << endl;
	cout << p->name << endl;
	cout << p->salary << endl;
}
