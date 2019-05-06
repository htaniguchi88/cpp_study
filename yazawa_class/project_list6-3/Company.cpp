#include <iostream>
#include <cstring>
#include "Company.h"
using namespace std;

void Employee::showData() {
	cout << "社員番号:" << number << endl;
	cout << "氏名:" << name << endl;
	cout << "給与:" << salary << endl;
}

Employee::Employee() {
	number = 0;
	strcpy(name, "未設定");
	salary = 150;
}

Employee::Employee(int nu, const char *na, int sa) {
	number = nu;
	strcpy(name, na);
	salary = sa;
}

void Director::showData() {
	Employee::showData();
	cout << "株式保有数:" << stock << endl;
}

Director::Director() {
	stock = 100;
}

Director::Director(int nu, const char *na, int sa, int st) : Employee(nu, na, sa) {
	stock = st;
}

void Manager::showData() {
	Employee::showData();
	cout << "出張費:" << travelAllowance << endl;
}

Manager::Manager() {
	travelAllowance = 1;
}

Manager::Manager(int nu, const char *na, int sa, int tr) : Employee(nu, na, sa) {
	travelAllowance = tr;
}

void Salesman::showData() {
	Employee::showData();
	cout << "売上:" << sales << endl;
}

Salesman::Salesman() {
	sales = 0;
}

Salesman::Salesman(int nu, const char *na, int sa, int ss) : Employee(nu, na, sa){
	sales = ss;
}
