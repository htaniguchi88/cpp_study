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

void Employee::showData() {
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
}

int main() {
	Employee taniguchi;
	Employee *someone;

	someone = &taniguchi;

	someone->number = 1234;
	strcpy(someone->name,  "たにぐち");
	someone->salary = 500;

	someone->showData();

	return 0;
}
