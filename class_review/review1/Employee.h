#include <iostream>

class Employee {
public:
	int number;
	char name[80];
	int salary;
	char comment[80];
protected:
	void showData();
};

//継承
class Engineer : public Employee {
public:
	char language[80];
	void showAllData();
};

