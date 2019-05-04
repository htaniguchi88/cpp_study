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

//Employeeクラスを継承して新たにSalesmanクラスを定義する
class Salesman : public Employee {

};

int main() {
	Salesman tanaka;

	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 500;
	tanaka.showData();

	return 0;
}
