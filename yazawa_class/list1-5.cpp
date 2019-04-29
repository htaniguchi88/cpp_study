#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
	int number;
	char name[80];
	int salary;
};

struct Company {
	struct Employee person[3];
	char companyName[80];
};

int main() {
	struct Company gihyo;

	gihyo.person[0].number = 1234;
	strcpy(gihyo.person[0].name, "谷口");
	gihyo.person[0].salary = 500;

	gihyo.person[1].number = 1235;
	strcpy(gihyo.person[1].name, "井上");
	gihyo.person[1].salary = 500;

	gihyo.person[2].number = 1236;
	strcpy(gihyo.person[2].name, "倉本");
	gihyo.person[2].salary = 600;

	for (int i = 0; i < 3 ; i++) {
		cout << gihyo.person[i].number << endl;
		cout << gihyo.person[i].name << endl;
		cout << gihyo.person[i].salary << endl;
	}

}
