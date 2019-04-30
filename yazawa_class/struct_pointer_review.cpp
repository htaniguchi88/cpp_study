#include <cstring>
#include <iostream>

using namespace std;

struct Employee {
	int number;
	char name[80];
	int salary;
};

void showEmployee(struct Employee *p);

int main() {
	struct Employee taniguchi;

	taniguchi.number = 10013800;
	strcpy(taniguchi.name, "たにやん");
	taniguchi.salary = 500;

	showEmployee(&taniguchi);
}

void showEmployee(struct Employee *p) {
	cout << p->number << endl;
	cout << p->name << endl;
	cout << p->salary << endl;
}
