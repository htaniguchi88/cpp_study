#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::showData() {
	cout << "社員番号: " << number << endl;
	cout << "氏名: " << name << endl;
	cout << "給与: " << salary << endl;
	cout << "一言コメント: " << comment << endl;
};

void Engineer::showAllData() {
	Employee::showData();
	cout << "プログラミング言語: " << language << endl;
}
