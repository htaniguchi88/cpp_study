#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

void Employee::showData() {
	cout << number << endl;
	cout << name << endl;
	cout << salary << endl;
};

void Engineer::showAllData() {
	Employee::showData();
	cout << language << endl;
	cout << "I am a engineer" << endl;
}
