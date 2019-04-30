#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
	int number;
	char name[80];
	int salary;
};

//戻り値が構造体の関数のプロトタイプ宣言
struct Employee *getEmployee();

int main() {
	//構造体のポインタを宣言する
	struct Employee *p;

	p = getEmployee();

	cout << p->number << endl;
	cout << p->name << endl;
	cout << p->salary << endl;

	return 0;
}

struct Employee *getEmployee() {
	static struct Employee tanaka;

	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 500;

	return &tanaka;
}
