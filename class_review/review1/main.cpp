#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	Employee hoge;
	Engineer taniguchi;

	hoge.number = 100;

	taniguchi.number = 138;
	strcpy(taniguchi.name, "谷口");
	taniguchi.salary = 500;
	strcpy(taniguchi.language, "C++");
	strcpy(taniguchi.comment, "I am a engineer!");

	hoge.showData();

	taniguchi.showAllData();

	return 0;

}
