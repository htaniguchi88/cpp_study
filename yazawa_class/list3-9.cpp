#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
	int number;
	char name[80];
	int salary;
	void showData();
};

void Employee::showData() { //Employeeクラスのメンバ関数
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
}

int main() {
	Employee obj[3];

	obj[0].number = 1234;
	strcpy(obj[0].name, "たにぐち");
	obj[0].salary = 500;

	obj[1].number = 1235;
	strcpy(obj[1].name, "くらもと");
	obj[1].salary = 600;

	obj[2].number = 1236;
	strcpy(obj[2].name, "いのうえ");
	obj[2].salary = 500;

	for (int i; i<3; i++){
		obj[i].showData();
	}
}
