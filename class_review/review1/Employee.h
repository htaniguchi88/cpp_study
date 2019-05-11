#include <iostream>

class Employee {
public:
	int number;
	char name[80];
	int salary;
protected:
	void showData();
};

//継承
class Engineer : public Employee {
public:
	char language[20][50];
	void showAllData();
};

