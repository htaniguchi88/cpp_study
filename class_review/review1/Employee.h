#include <iostream>

class Employee {
public:
	int number;
	char name[80];
	int salary;
	char comment[80];
	virtual void showHeader()=0;
protected:
	void showData();
};

//継承
class Engineer : public Employee {
public:
	char language[80];
	void showAllData();
	void showAllData(int sabbatical, int bonus);
	void showHeader();
};

