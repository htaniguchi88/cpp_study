#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
	int number;
	char name[80];
	int salary;
	void showData();
	Employee(); //コンストラクタ!!
};

void Employee::showData() {
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
}

//3つのメンバ変数に初期値を代入するコンストラクタの実装
Employee::Employee() {
	number = 0;
	strcpy(name, "未設定");
	salary = 15000;
}

int main() {
	Employee someone;

	someone.showData();

	return 0;
}
