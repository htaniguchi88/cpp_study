#include <cstring>
#include "Employee.h"

int main() {
	Employee tanaka;

	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 500;

	tanaka.showData();

	return 0;
}
