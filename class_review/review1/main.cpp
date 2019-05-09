#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	Employee taniguchi;

	taniguchi.number = 138;
	strcpy(taniguchi.name, "谷口");
	taniguchi.salary = 500;

	taniguchi.showData();

	return 0;

}
