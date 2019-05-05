#include <cstring>
#include <iostream>
using namespace std;

class Employee {
public:
	int number;
	char name[80];
	int salary;
protected:
	void showData();
};

void Employee::showData() {
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
}

class Salesman : public Employee {
public:
	int sales;
	void showAllData();
};

void Salesman::showAllData() {
	showData();

	cout << sales << endl;
}

int main() {
	Salesman tanaka;

	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 500;
	tanaka.sales = 10000;
	tanaka.showAllData();

	return 0;
}
