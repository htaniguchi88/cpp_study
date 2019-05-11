#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	char language[16][80] =  {"C", "C++", "C#", "Go", "Python", "JavaScript"};

	Engineer taniguchi;

	taniguchi.number = 138;
	strcpy(taniguchi.name, "谷口");
	taniguchi.salary = 500;

	for (int i=0; i<=5; i++) {
		strcpy(taniguchi.language[i], language[i]);
	}

	taniguchi.showAllData();

	return 0;

}
