#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	Engineer taniguchi;

	taniguchi.number = 138;
	strcpy(taniguchi.name, "谷口");
	taniguchi.salary = 500;
	strcpy(taniguchi.language, "C++");
	strcpy(taniguchi.comment, "I am a engineer!");

	taniguchi.showAllData();
	taniguchi.showAllData(4, 100);

	return 0;

}
