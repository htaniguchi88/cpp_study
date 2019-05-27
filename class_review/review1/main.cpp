#include <cstring>
#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
	Employee shinsotsu;
	Engineer taniguchi;

	shinsotsu.number = 150;
	strcpy(shinsotsu.name, "新卒太郎");
	shinsotsu.salary = 400;

	taniguchi.number = 138;
	strcpy(taniguchi.name, "谷口");
	taniguchi.salary = 500;
	strcpy(taniguchi.language, "C++");
	strcpy(taniguchi.comment, "I am a engineer!");



	taniguchi.showHeader();
	taniguchi.showAllData();
	taniguchi.showAllData(4, 100);

	return 0;

}
